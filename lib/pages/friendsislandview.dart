import 'dart:async';

import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:firebase_storage/firebase_storage.dart';
import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';
import 'package:http/http.dart' as http;
import 'package:orbital_test_space/controllers/unityContoller.dart';
import '../main.dart';
import 'dart:convert';
class FriendsIslandView extends StatefulWidget {
  final String friendID;
  const FriendsIslandView({required this.friendID});
  @override
  _FriendsIslandViewState createState() => _FriendsIslandViewState();
}

class _FriendsIslandViewState extends State<FriendsIslandView> {
  User? frienduser;
  UnityWidgetController? _unityWidgetController;
  String jsonString = "";
  String friendemail = '';
  String friendUID = '';

  //To Do
  //1. check if the friend alr exists in the friends collection
  // if its there then make it unable to add friend




  @override
  void initState() {
    super.initState();
    asyncFuncCalls();
  }

  void asyncFuncCalls() async {
    await FindFriendAndGetUID(widget.friendID);
    await LoadFriendDataUsingUID();
    // _unityWidgetController?.postMessage('MY_GM', 'ChangeTheSceneNow', 'test');
  }

  FindFriendAndGetUID(String friendID) async {
    DocumentSnapshot friendDoc = await FirebaseFirestore.instance
        .collection('friends')
        .doc(friendID)
        .get();
    if (friendDoc.exists) {
      Map<String, dynamic>? friendData =
          friendDoc.data() as Map<String, dynamic>?;
      setState(() {
        friendemail = friendData!['email'];
      });
    }
    DocumentSnapshot friendSnapshot = await FirebaseFirestore.instance
        .collection('users')
        .doc(friendemail)
        .get();
    if (friendSnapshot.exists) {
      Map<String, dynamic>? friendData =
          friendSnapshot.data() as Map<String, dynamic>?;
      setState(() {
        friendUID = friendData!['uid'];
      });
        
    }
  }

  LoadFriendDataUsingUID() async {
    print(friendUID);
    String filePath = "templatesUsers/${friendUID}.json";
    Reference ref = FirebaseStorage.instance.ref().child(filePath);

    try {
      // Get the download URL for the file
      String downloadUrl = await ref.getDownloadURL();

      // Make an HTTP GET request to download the file
      http.Response response = await http.get(Uri.parse(downloadUrl));

      if (response.statusCode == 200) {
        // Convert the response body to a string
        // print("downloading from new link");
        String json = utf8.decode(response.bodyBytes);
        setState(() {
          jsonString = json.toString();
        });
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
    } else {
      return MaterialApp(
          home: Scaffold(
              body: Card(
        // margin: const EdgeInsets.all(8),
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
              fullscreen: true,
            ),
          ]),
          Positioned(
            top: 20,
            left: 10,
            child: Container(
                width: 300,
                height: 100,
                child: Row(
                  children: [
                    OutlinedButton(
                      child: const Text('Back'),
                      style: OutlinedButton.styleFrom(
                        primary: Colors.white,
                        backgroundColor: Colors.green,
                        textStyle: TextStyle(
                          fontSize: 14,
                          fontFamily: 'Rotorcap',
                        ),
                      ),
                      onPressed: () async {
                        _unityWidgetController?.dispose();
                        _unityWidgetController?.unload();
                        Navigator.push(
                            context,
                            MaterialPageRoute(
                                builder: (context) => MyHomePage(
                                      user: FirebaseAuth
                                          .instance.currentUser!,
                                    )));
                      },
                    ),

                  ],
                )),
          ),
        ]),
      )));
    }
  }

  // Communication from Unity to Flutter
  void onUnityMessage(message) async {
    print('Received message from unity: ${message.toString()}');
  }

  //_unityWidgetController?.postMessage('LoadScene', 'SampleScene', '');

  // Callback that connects the created controller to the unity controller
  void onUnityCreated(controller) async {
    print("creating unity controller");
    print("jsonString is " + jsonString);
    setState(() {
      _unityWidgetController = controller;
    });
    _unityWidgetController?.postMessage('MY_GM', 'ChangeTheSceneNow', 'test');
    Timer(const Duration(seconds: 2), () {
      loadSceneFromFirebase(_unityWidgetController, jsonString);
    });
  }

  // Communication from Unity when new scene is loaded to Flutter
  void onUnitySceneLoaded(SceneLoaded? sceneInfo) {
    if (sceneInfo != null) {
      print('Received scene loaded from unity: ${sceneInfo.name}');
    }
  }
}

