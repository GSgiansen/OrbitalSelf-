#include "UnityAppController+Rendering.h"
#include "UnityAppController+ViewHandling.h"

#include "Unity/InternalProfiler.h"
#include "Unity/UnityMetalSupport.h"
#include "Unity/DisplayManager.h"

#include "UI/UnityView.h"

#include <dlfcn.h>

// _glesContextCreated was renamed to _renderingInited
extern bool _renderingInited;
extern bool _unityAppReady;
extern bool _skipPresent;
extern bool _didResignActive;

static int _renderingAPI = 0;
static int SelectRenderingAPIImpl();

static bool _enableRunLoopAcceptInput = false;

@implementation UnityAppController (Rendering)

- (void)createDisplayLink
{
    _displayLink = [CADisplayLink displayLinkWithTarget: self selector: @selector(repaintDisplayLink)];
    [self callbackFramerateChange: -1];
    [_displayLink addToRunLoop: [NSRunLoop currentRunLoop] forMode: NSRunLoopCommonModes];
}

- (void)destroyDisplayLink
{
    [_displayLink invalidate];
    _displayLink = nil;
}

- (void)repaintDisplayLink
{
    if (!_didResignActive)
    {
        UnityDisplayLinkCallback(_displayLink.timestamp);
        [self repaint];
    }
}

- (void)repaint
{
#if UNITY_SUPPORT_ROTATION
    [self checkOrientationRequest];
#endif
    [_unityView recreateRenderingSurfaceIfNeeded];
    [_unityView processKeyboard];
    UnityDeliverUIEvents();

    if (!UnityIsPaused())
        UnityRepaint();
}

- (void)callbackGfxInited
{
    InitRendering();
    _renderingInited = true;

    [self shouldAttachRenderDelegate];
    [_unityView recreateRenderingSurface];
    [_renderDelegate mainDisplayInited: _mainDisplay.surface];

    _mainDisplay.surface->allowScreenshot = 1;
}

- (void)callbackPresent:(const UnityFrameStats*)frameStats
{
    if (_skipPresent)
        return;

    // metal needs special processing, because in case of airplay we need extra command buffers to present non-main screen drawables
    if (UnitySelectedRenderingAPI() == apiMetal)
    {
        [[DisplayManager Instance].mainDisplay present];
        [[DisplayManager Instance] enumerateNonMainDisplaysWithBlock:^(DisplayConnection* conn) {
            PreparePresentNonMainScreenMTL((UnityDisplaySurfaceMTL*)conn.surface);
        }];
    }
    else
    {
        [[DisplayManager Instance] present];
    }

    Profiler_FramePresent(frameStats);
}

- (void)callbackFramerateChange:(int)targetFPS
{
    int maxFPS = (int)[UIScreen mainScreen].maximumFramesPerSecond;
    if (targetFPS <= 0)
        targetFPS = UnityGetTargetFPS();
    if (targetFPS > maxFPS)
    {
        targetFPS = maxFPS;
        UnitySetTargetFPS(targetFPS);
        return;
    }

    _enableRunLoopAcceptInput = (targetFPS == maxFPS && UnityDeviceCPUCount() > 1);

    if (@available(iOS 15.0, tvOS 15.0, *))
        _displayLink.preferredFrameRateRange = CAFrameRateRangeMake(targetFPS, targetFPS, targetFPS);
    else
        _displayLink.preferredFramesPerSecond = targetFPS;
}

- (void)selectRenderingAPI
{
    NSAssert(_renderingAPI == 0, @"[UnityAppController selectRenderingApi] called twice");
    _renderingAPI = SelectRenderingAPIImpl();
}

- (UnityRenderingAPI)renderingAPI
{
    NSAssert(_renderingAPI != 0, @"[UnityAppController renderingAPI] called before [UnityAppController selectRenderingApi]");
    return (UnityRenderingAPI)_renderingAPI;
}

@end


extern "C" void UnityGfxInitedCallback()
{
    [GetAppController() callbackGfxInited];
}

extern "C" void UnityPresentContextCallback(struct UnityFrameStats const* unityFrameStats)
{
    [GetAppController() callbackPresent: unityFrameStats];
}

extern "C" void UnityFramerateChangeCallback(int targetFPS)
{
    [GetAppController() callbackFramerateChange: targetFPS];
}

static NSBundle*        _MetalBundle    = nil;
static id<MTLDevice>    _MetalDevice    = nil;

static bool IsMetalSupported(int /*api*/)
{
    _MetalBundle = [NSBundle bundleWithPath: @"/System/Library/Frameworks/Metal.framework"];
    if (_MetalBundle)
    {
        [_MetalBundle load];
        _MetalDevice = ((MTLCreateSystemDefaultDeviceFunc)::dlsym(dlopen(0, RTLD_LOCAL | RTLD_LAZY), "MTLCreateSystemDefaultDevice"))();
        if (_MetalDevice)
            return true;
    }

    [_MetalBundle unload];
    return false;
}

static int SelectRenderingAPIImpl()
{
    const int api = UnityGetRenderingAPI();
    if (api == apiMetal && IsMetalSupported(0))
        return api;

#if TARGET_IPHONE_SIMULATOR || TARGET_TVOS_SIMULATOR
    printf_console("On Simulator, Metal is supported only from iOS 13, and it requires at least macOS 10.15 and Xcode 11. Setting no graphics device.\n");
#endif
    return apiNoGraphics;
}

extern "C" NSBundle*            UnityGetMetalBundle()
{
    return _MetalBundle;
}

extern "C" MTLDeviceRef         UnityGetMetalDevice()       { return _MetalDevice; }
extern "C" MTLCommandQueueRef   UnityGetMetalCommandQueue() { return ((UnityDisplaySurfaceMTL*)GetMainDisplaySurface())->commandQueue; }
extern "C" int                  UnitySelectedRenderingAPI() { return _renderingAPI; }

// deprecated and no longer used by unity itself (will soon be removed)
extern "C" MTLCommandQueueRef   UnityGetMetalDrawableCommandQueue() { return UnityGetMetalCommandQueue(); }


extern "C" UnityRenderBufferHandle  UnityBackbufferColor()      { return GetMainDisplaySurface()->unityColorBuffer; }
extern "C" UnityRenderBufferHandle  UnityBackbufferDepth()      { return GetMainDisplaySurface()->unityDepthBuffer; }

extern "C" void                 DisplayManagerEndFrameRendering() { [[DisplayManager Instance] endFrameRendering]; }

extern "C" void                 UnityPrepareScreenshot()    { UnitySetRenderTarget(GetMainDisplaySurface()->unityColorBuffer, GetMainDisplaySurface()->unityDepthBuffer); }

extern "C" void UnityRepaint()
{
    @autoreleasepool
    {
        Profiler_FrameStart();
        if (UnityIsBatchmode())
            UnityBatchPlayerLoop();
        else
            UnityPlayerLoop();
        Profiler_FrameEnd();
    }
}
