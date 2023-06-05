import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';

class UnityDemoScreen extends StatefulWidget {
  const UnityDemoScreen({Key? key}) : super(key: key);

  @override
  State<UnityDemoScreen> createState() => __UnityDemoScreenState();
}

class __UnityDemoScreenState extends State<UnityDemoScreen> {
  static final GlobalKey<ScaffoldState> _scaffoldKey =
      GlobalKey<ScaffoldState>();
  UnityWidgetController? _unityWidgetController;
  double _sliderValue = 0.0;

  @override
  void initState() {
    super.initState();
  }

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        key: _scaffoldKey,
        body: Card(
          margin: const EdgeInsets.all(8),
          clipBehavior: Clip.antiAlias,
          shape: RoundedRectangleBorder(
            borderRadius: BorderRadius.circular(20.0),
          ),
          child: Stack(children: <Widget>[
            Stack(children: <Widget>[
              UnityWidget(
                onUnityCreated: onUnityCreated,
                onUnityMessage: onUnityMessage,
                onUnitySceneLoaded: onUnitySceneLoaded,
                fullscreen: false,
              ),
              Positioned(
                bottom: 20,
                left: 20,
                right: 20,
                child: Card(
                  elevation: 10,
                  child: Row(
                    crossAxisAlignment: CrossAxisAlignment.center,
                    mainAxisAlignment: MainAxisAlignment.center,
                    children: <Widget>[
                    Padding(
                      padding: const EdgeInsets.only(top: 20),
                    ),
                    ElevatedButton(
                      onPressed: () {
                        _unityWidgetController?.postMessage(
                          'Cube',
                          'OnMessage',
                          'ChangeColor',
                        )?.then(
                          (value) => print("called color change"),
                        );
                      },
                      child: const Text('red'),
                    ),
                    ElevatedButton(
                      onPressed: () {
                        _unityWidgetController?.postMessage(
                          'MainCamera',
                          'OnMessage',
                          'RotateCameraLeft',
                        )?.then(
                          (value) => print("rotate camera left"),
                        );
                      },
                      child: const Text('left'),
                    ),
                    ElevatedButton(
                      onPressed: () {
                        _unityWidgetController?.postMessage(
                          'MainCamera',
                          'OnMessage',
                          'RotateCameraRight',
                        )?.then(
                          (value) => print("rotate camera right"),
                        );
                      },
                      child: const Text('right'),
                    ),
                    ElevatedButton(
                      onPressed: () {
                        _unityWidgetController?.postMessage(
                          'GameObject',
                          'OnMessage',
                          'addCube',
                        )?.then(
                          (value) => print("add new cube"),
                        );
                      },
                      child: const Text('gameObj'),
                    ),
                    ElevatedButton(
                      onPressed: () {
                        _unityWidgetController?.postMessage(
                          'Cube',
                          'OnMessage',
                          'addCube',
                        )?.then(
                          (value) => print("add new cube"),
                        );
                      },
                      child: const Text('cube'),
                    ),
                  ]),
                ),
              )
            ]),
          ]),
        ),
      ),
    );
  }

  // Communcation from Flutter to Unity
  void setRotationSpeed(String speed) {
    _unityWidgetController?.postMessage(
      'MainIsland',
      'SetRotationSpeed',
      speed,
    );
  }

  // Communication from Unity to Flutter
  void onUnityMessage(message) {
    print('Received message from unity: ${message.toString()}');
    //_unityWidgetController?.postMessage('LoadScene', 'SampleScene', '');
  }

  // Callback that connects the created controller to the unity controller
  void onUnityCreated(controller) {
    _unityWidgetController = controller;
  }

  // Communication from Unity when new scene is loaded to Flutter
  void onUnitySceneLoaded(SceneLoaded? sceneInfo) {
    if (sceneInfo != null) {
      print('Received scene loaded from unity: ${sceneInfo.name}');
      print(
          'Received scene loaded from unity buildIndex: ${sceneInfo.buildIndex}');
    }
  }
}
