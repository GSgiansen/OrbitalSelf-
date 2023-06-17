// ignore_for_file: non_constant_identifier_names

import 'dart:typed_data';
import 'dart:convert';
import 'dart:io';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:firebase_storage/firebase_storage.dart';
import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';
import 'package:orbital_test_space/controllers/unityfirebaseFunctions.dart';
import 'package:http/http.dart' as http;
import 'package:path_provider/path_provider.dart';
import 'dart:io';

import '../controllers/unityContoller.dart';

class UnityDemoScreen extends StatefulWidget {
  UnityDemoScreen({Key? key, User? user}) : super(key: key);
  User? user;

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

  var UID = FirebaseAuth.instance.currentUser!.uid;
  //query if user exists in the database

  @override
  void initState() {
    super.initState();
    future();
  }

  Future<void> future() async {
    bool newUser = await checkNewUser(UID);
    print(newUser);
    if (newUser) {
      //create new json file in firebase
      print("making new user");
      setState(() {
        jsonString = createNewJsonFile(UID).toString();
      });
    } else {
      //download json file from firebas

      downloadJsonFileFromFirebase();
      setState(() {
        jsonString = downloadJsonFileFromFirebase().toString();
      });
    }
  }

  Future<String> downloadJsonFileFromFirebase() async {
    // Create a reference to the Firebase Storage file
    User? user = FirebaseAuth.instance.currentUser;
    var uid = user!.uid;
    String filePath = "templatesUsers/${uid}.json";
    Reference ref = FirebaseStorage.instance.ref().child(filePath);

    try {
      // Get the download URL for the file
      String downloadUrl = await ref.getDownloadURL();

      // Make an HTTP GET request to download the file
      http.Response response = await http.get(Uri.parse(downloadUrl));

      if (response.statusCode == 200) {
        // Convert the response body to a string
        // print("downloading from new link");
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
    User? user = FirebaseAuth.instance.currentUser;
    var uid = user!.uid;
    String filePath = "templatesUsers/${uid}.json";
    Reference ref = FirebaseStorage.instance.ref().child(filePath);

    //local pat file
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

  // new users would not have json files with their UID yet
  Future<bool> checkNewUser(var UID) async {
    // Create a reference to the Firebase Storage file
    String filePath = "templatesUsers/${UID}.json";
    Reference ref = FirebaseStorage.instance.ref().child(filePath);
    bool state = false;

    // Check if the file exists
    await ref.getDownloadURL().then((value) {
      print("file exists");
      setState(() {
        state = false;
      });
    }).catchError((onError) {
      print("file does not exist");
      setState(() {
        state = true;
      });
      //if file does not exist, sreturn true
    });

    return state;
  }

  Future<String> createNewJsonFile(var UID) async {
    // Create a reference to the Firebase Storage file
    // load scene.json from the storage, then save it as itself

    String filePath = "templatesUsers/${UID}.json";
    Reference ref = FirebaseStorage.instance.ref().child(filePath);

    String templatePath = "templatesUsers/scene.json";

    //load the template scene.json and send to firebase
    Reference templateRef = FirebaseStorage.instance.ref().child(templatePath);
    try {
      // Get the download URL for the file
      String downloadUrl = await templateRef.getDownloadURL();

      // Make an HTTP GET request to download the file
      http.Response response = await http.get(Uri.parse(downloadUrl));

      if (response.statusCode == 200) {
        // Convert the response body to a string
        // print("downloading from new link");
        Uint8List fileBytes = response.bodyBytes;
        jsonString = utf8.decode(fileBytes);
        await ref.putData(fileBytes);

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

  @override
  Widget build(BuildContext context) {
    if (jsonString == "" || FirebaseAuth.instance.currentUser == null) {
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
                                        ?.postMessage('GameObject', 'OnMessage',
                                            jsonString)
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
    if (message.substring(0, 6) == 'upload') {
      print(message.substring(0, 6));
      var jsonString = message.substring(6);
      uploadJSONfromUnity(jsonString);
    }

    //_unityWidgetController?.postMessage('LoadScene', 'SampleScene', '');
  }

  // Callback that connects the created controller to the unity controller
  void onUnityCreated(controller) {
    _unityWidgetController = controller;
    _unityWidgetController
        ?.postMessage('GameObject', 'OnMessage', jsonString)
        ?.then(
          (value) => print("loaded new scene rendered"),
        );
  }

  // Communication from Unity when new scene is loaded to Flutter
  void onUnitySceneLoaded(SceneLoaded? sceneInfo) {
    if (sceneInfo != null) {
      print('Received scene loaded from unity: ${sceneInfo.name}');
    }
  }
}
