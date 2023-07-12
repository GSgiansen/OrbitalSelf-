import 'dart:convert';

import 'package:firebase_auth/firebase_auth.dart';
import 'package:firebase_storage/firebase_storage.dart';
import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';
import 'package:orbital_test_space/components/inventoryCard.dart';
import 'package:orbital_test_space/components/inventoryMenu.dart';
import 'package:orbital_test_space/controllers/unityfirebaseFunctions.dart';
import 'package:orbital_test_space/main.dart';
import 'package:orbital_test_space/pages/profilepage.dart';
import 'package:http/http.dart' as http;

import '../controllers/inventoryToUnity.dart';
import '../controllers/unityContoller.dart';

class UnityMenu extends StatefulWidget {
  final User? user;
  final UnityWidgetController? unityWidgetController;
  final CurrencyNotifier currencyNotifier;
  const UnityMenu(
      {super.key,
      required this.user,
      required this.currencyNotifier,
      required this.unityWidgetController});

  @override
  _UnityMenuState createState() => _UnityMenuState();
}

class _UnityMenuState extends State<UnityMenu> {
  @override
  Widget build(BuildContext context) {
    return BottomAppBar(
        child: Row(children: <Widget>[
      IconButton(
        tooltip: "Save to firebase",
        icon: Icon(Icons.store),
        onPressed: () {
          saveSceneToFirebase(widget.unityWidgetController);
        },
      ),
      IconButton(
        tooltip: "spawn island",
        icon: Icon(Icons.add),
        onPressed: () async {
          // Create a reference to the Firebase Storage file
          User? user = FirebaseAuth.instance.currentUser;
          var uid = user!.uid;
          String filePath = "templatesUsers/${uid}.json";
          Reference ref = FirebaseStorage.instance.ref().child(filePath);
          var jsonString;
          try {
            // Get the download URL for the file
            String downloadUrl = await ref.getDownloadURL();

            // Make an HTTP GET request to download the file
            http.Response response = await http.get(Uri.parse(downloadUrl));

            if (response.statusCode == 200) {
              // Convert the response body to a string
              // print("downloading from new link");
              jsonString = utf8.decode(response.bodyBytes);
            } else {
              print(
                  'Failed to download JSON file. Status code: ${response.statusCode}');
            }
          } catch (e) {
            print('Error occurred while downloading JSON file: $e');
          }
          loadSceneFromFirebase(widget.unityWidgetController, jsonString);
        },
      ),
      IconButton(
        tooltip: "load inventory menu ",
        icon: Icon(Icons.local_dining),
        onPressed: () async {
          await loadInventoryFromFirebase(widget.unityWidgetController);
          
        },
      
      ),
      IconButton(
        tooltip: "Zoom In",
        icon: Icon(Icons.zoom_in),
        onPressed: () {
          ZoomIn(widget.unityWidgetController);
        },
      ),
      IconButton(
        tooltip: "Zoom Out",
        icon: Icon(Icons.zoom_out),
        onPressed: () {
          ZoomOut(widget.unityWidgetController);
        },
      ),
      IconButton(
        tooltip: "Change Color",
        icon: Icon(Icons.shopping_bag),
        onPressed: () {
          //todo, but shld show current inventory items in a modal bottom sheet
          showModalBottomSheet<void>(
              context: context,
              builder: (BuildContext context) {
                print(widget.user);
                var user = widget.user;
                if (user == null) {
                  user = FirebaseAuth.instance.currentUser;
                }
                return InventoryMenu(
                  user: widget.user,
                  unityWidgetController: widget.unityWidgetController,
                );
              });
        },
      ),
      IconButton(
        tooltip: "Back to Profile",
        icon: Icon(Icons.person),
        onPressed: () async {
          widget.unityWidgetController?.dispose();
          widget.unityWidgetController?.unload();
          Navigator.push(
              context,
              MaterialPageRoute(
                  builder: (context) => MyHomePage(
                        user: widget.user,
                      )));
        },
      )
    ]));
  }
}
