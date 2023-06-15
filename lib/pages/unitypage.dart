import 'dart:typed_data';
import 'dart:convert';
import 'dart:io';
import 'package:firebase_storage/firebase_storage.dart';
import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';
import 'package:orbital_test_space/controllers/unityfirebaseFunctions.dart';
import 'package:http/http.dart' as http;
import 'package:path_provider/path_provider.dart';
import 'dart:io';

import '../controllers/unityContoller.dart';

class UnityDemoScreen extends StatefulWidget {
  const UnityDemoScreen({Key? key}) : super(key: key);

  @override
  State<UnityDemoScreen> createState() => __UnityDemoScreenState();
}

class __UnityDemoScreenState extends State<UnityDemoScreen> {
  static final GlobalKey<ScaffoldState> _scaffoldKey =
      GlobalKey<ScaffoldState>();
  UnityWidgetController? _unityWidgetController;
  List<int> templateSceneData = [];
  final storage = FirebaseStorage.instance;
  String jsonString = "";

  @override
  void initState() {
    super.initState();
    downloadJsonFileFromFirebase();
    setState(() {
      jsonString = downloadJsonFileFromFirebase().toString();
    });
  }

  Future<String> downloadJsonFileFromFirebase() async {
    // Create a reference to the Firebase Storage file
    String filePath = "templates/scene.json";
    Reference ref = FirebaseStorage.instance.ref().child(filePath);

    try {
      // Get the download URL for the file
      String downloadUrl = await ref.getDownloadURL();

      // Make an HTTP GET request to download the file
      http.Response response = await http.get(Uri.parse(downloadUrl));

      if (response.statusCode == 200) {
        // Convert the response body to a string
        jsonString = utf8.decode(response.bodyBytes);
        return jsonString.toString();
      } else {
        print(
            'Failed to download JSON file. Status code: ${response.statusCode}');
        return "cannot download";
      }
    } catch (e) {
      print('Error occurred while downloading JSON file: $e');
      return "error";
    }
  }

  Future<void> uploadJSONfromUnity(String jsonstring) async {
    // Create a reference to the Firebase Storage file
    String filePath = "templatesUsers/scene.json";
    Reference ref = FirebaseStorage.instance.ref().child(filePath);
    Directory appDir = await getApplicationDocumentsDirectory();
    String localPath = '${appDir.path}/scene.json';

    // Create the JSON file
    File jsonFile = File(localPath);
    await jsonFile.writeAsString(jsonString);
    try {
      // Upload raw data.
      await ref.putFile(jsonFile);
    } on FirebaseException catch (e) {
      // ...
      print(e);
    }
  }


  Future<String> newUserLogin() async {
    //todo 

    //check if user is in the storage
    String filePath = "templatesUsers/scene.json";
    return "newuser";
  }

  @override
  Widget build(BuildContext context) {
    if (jsonString == "") {
      return const Center(
        child: CircularProgressIndicator(),
      );
    }
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
                            Wrap(
                              spacing: 8.0, // gap between adjacent chip
                              runSpacing: 4.0,
                              children: [
                                ElevatedButton(
                                  onPressed: () {
                                    RotateCameraLeft(_unityWidgetController);
                                  },
                                  child: const Text('left'),
                                ),
                                ElevatedButton(
                                  onPressed: () {
                                    RotateCameraRight(_unityWidgetController);
                                  },
                                  child: const Text('right'),
                                ),
                                ElevatedButton(
                                  onPressed: () {
                                    AddCube(_unityWidgetController);
                                  },
                                  child: const Text('gameObj'),
                                ),
                                ElevatedButton(
                                  onPressed: () {
                                    _unityWidgetController
                                        ?.postMessage(
                                            'Chair', 'OnMessage', jsonString)
                                        ?.then(
                                          (value) => print("loaded new scene"),
                                        );
                                  },
                                  child: const Text('scene'),
                                ),
                              ],
                            ),
                          ]),
                    ),
                  ),
                  Positioned(
                    top: 10,
                    child: Row(children: <Widget>[
                      ElevatedButton(
                        onPressed: () {
                          saveSceneToFirebase(_unityWidgetController);
                        },
                        child: const Text('firebase'),
                      ),
                      ElevatedButton(
                          onPressed: () {
                            ZoomIn(_unityWidgetController);
                          },
                          child: const Text('In')),
                      ElevatedButton(
                          onPressed: () {
                            ZoomOut(_unityWidgetController);
                          },
                          child: const Text('Out')),
                    ]),
                  ),
                ]),
              ]),
            )));
  }

  // Communication from Unity to Flutter
  void onUnityMessage(message) {
    print('Received message from unity: ${message.toString()}');
    if (message.substring(0,6) == 'upload') {
      print(message.substring(0,6));
      var jsonString = message.substring(6);
      uploadJSONfromUnity(jsonString);
    }

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
    }
  }
}
