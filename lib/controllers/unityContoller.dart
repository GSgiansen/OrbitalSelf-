
import 'package:flutter_unity_widget/flutter_unity_widget.dart';


void CubeRed(UnityWidgetController? _unityWidgetController) {
  _unityWidgetController
      ?.postMessage(
        'Cube',
        'OnMessage',
        'ChangeColor',
      )
      ?.then(
        (value) => print("called color change"),
      );
}

void RotateCameraLeft(UnityWidgetController? _unityWidgetController) {
  _unityWidgetController
      ?.postMessage(
        'MainCamera',
        'OnMessage',
        'RotateCameraLeft',
      )
      ?.then(
        (value) => print("rotate camera left"),
      );
}

void RotateCameraRight(UnityWidgetController? _unityWidgetController) {
  _unityWidgetController
      ?.postMessage(
        'MainCamera',
        'OnMessage',
        'RotateCameraRight',
      )
      ?.then(
        (value) => print("rotate camera right"),
      );
}


void AddCube(UnityWidgetController? _unityWidgetController) {
  _unityWidgetController
      ?.postMessage(
        'GameObject',
        'OnMessage',
        'addCube',
      )
      ?.then(
        (value) => print("add new cube"),
      );
}

void ZoomIn(UnityWidgetController? _unityWidgetController) {
  _unityWidgetController
      ?.postMessage(
        'MainCamera',
        'OnMessage',
        'zoomIn',
      )
      ?.then(
        (value) => print("Zoomed in"),
      );
}

void ZoomOut(UnityWidgetController? _unityWidgetController) {
  _unityWidgetController
      ?.postMessage(
        'MainCamera',
        'OnMessage',
        'zoomOut',
      )
      ?.then(
        (value) => print("Zoomed out"),
      );
}

void saveSceneToFirebase(UnityWidgetController? _unityWidgetController) {
  _unityWidgetController
      ?.postMessage(
        'Tree',
        'OnMessage',
        'saveScene',
      )
      ?.then(
        (value) => print("saved scene to firebase"),
      );
}
