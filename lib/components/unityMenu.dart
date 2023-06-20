
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';
import 'package:orbital_test_space/components/inventory.dart';
import 'package:orbital_test_space/components/inventoryMenu.dart';
import 'package:orbital_test_space/main.dart';
import 'package:orbital_test_space/pages/profilepage.dart';

import '../controllers/unityContoller.dart';

class UnityMenu extends StatefulWidget{
  final User? user;
  final UnityWidgetController? unityWidgetController;
  final CurrencyNotifier currencyNotifier;
  final ItemsOwned itemsOwned;
  const UnityMenu( 
      {super.key,
      required this.user,
      required this.currencyNotifier,
      required this.itemsOwned,
      required this.unityWidgetController}

  );

  @override
  
  _UnityMenuState createState() => _UnityMenuState();

}

class _UnityMenuState extends State<UnityMenu> {
  @override
  Widget build(BuildContext context) {
    return BottomAppBar(
      child: Row(
        children: <Widget>[
          IconButton(
            tooltip: "Save to firebase",
            icon: Icon(Icons.store),
            onPressed: () {
              saveSceneToFirebase(widget.unityWidgetController);
              
            },
          ),
          IconButton(
            tooltip: "Add Cube",
            icon: Icon(Icons.add),
            onPressed: () {
              AddCube(widget.unityWidgetController);
            },
          ),
          IconButton(
            tooltip: "Rotate Camera Left",
            icon: Icon(Icons.rotate_left),
            onPressed: () {
              RotateCameraLeft(widget.unityWidgetController);
            },
          ),
          IconButton(
            tooltip: "Rotate Camera Right",
            icon: Icon(Icons.rotate_right),
            onPressed: () {
              RotateCameraRight(widget.unityWidgetController);
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
              return InventoryMenu(user: widget.user);
            });
            },
          ),

          IconButton(
            tooltip: "Back to Profile",
            icon: Icon(Icons.person),
            onPressed: () {
              Navigator.push(
                context,
                MaterialPageRoute(
                  builder: (context) =>
                    MyHomePage(
                      user: widget.user,
            )));
            },
          )
        ]



    )
    );
  }
}