
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';

import '../controllers/unityContoller.dart';

class UnityMenu extends StatefulWidget{
  User? user;
  UnityWidgetController? unityWidgetController;
  UnityMenu(UnityWidgetController? unityWidgetController, user){
    this.unityWidgetController = unityWidgetController;
    this.user = user;
  } 

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
            icon: Icon(Icons.color_lens),
            onPressed: () {
              CubeRed(widget.unityWidgetController);
            },
          ),
        ]



    )
    );
  }
}