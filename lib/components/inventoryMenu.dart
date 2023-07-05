import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:flutter/widgets.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';
import 'package:orbital_test_space/controllers/fireStoreFunctions.dart';
import 'package:orbital_test_space/controllers/unityContoller.dart';

class InventoryMenu extends StatefulWidget {
  final User? user;
  UnityWidgetController? unityWidgetController;

  InventoryMenu({required this.user, 
    required this.unityWidgetController
  }
  );

  @override
  State<InventoryMenu> createState() => _InventoryMenuState();
}

class _InventoryMenuState extends State<InventoryMenu> {
  var email = FirebaseAuth.instance.currentUser!.email;
  final Stream<QuerySnapshot> _usersStream = FirebaseFirestore.instance
      .collection('users')
      .where('email', isEqualTo: FirebaseAuth.instance.currentUser!.email)
      .limit(1)
      .snapshots();
  @override
  Widget build(BuildContext context) {
    return StreamBuilder<QuerySnapshot>(
  stream: _usersStream,
  builder: (BuildContext context, AsyncSnapshot<QuerySnapshot> snapshot) {
    if (snapshot.hasError) {
      return Text('Something went wrong');
    }

    if (snapshot.connectionState == ConnectionState.waiting) {
      return Text("Loading");
    }
    
    List<Widget> lst = []; // Declare the list here
    
    snapshot.data!.docs.forEach((DocumentSnapshot document) {
      Map<String, dynamic> data = document.data()! as Map<String, dynamic>;
      if (data.containsKey('items')) {
        Map<String, dynamic> items = data['items'] as Map<String, dynamic>;
        
        for (var item in items.entries) {
          Map<String, dynamic> indiv = item.value;

          lst.add(ListTile(
            title: Text(
              indiv["name"],
              style: TextStyle(
                fontWeight: FontWeight.bold,
                fontSize: 24,
                fontFamily: 'Rotorcap',
              ),
            ),
            subtitle: Row(
              mainAxisAlignment: MainAxisAlignment.spaceBetween,
              crossAxisAlignment: CrossAxisAlignment.center,
              children: [
                Expanded(
                  child: Text(
                    "X " + indiv["number"].toString(),
                    style: TextStyle(
                      fontWeight: FontWeight.bold,
                      fontSize: 24,
                      fontFamily: 'Rotorcap',
                    ),
                  ),
                ),
                Expanded(
                  child: IconButton(
                    icon: Icon(Icons.add),
                    onPressed: () {
                      print("spawn object done");
                      String objectname = indiv["name"].toLowerCase();
                      loadChosenObject(widget.unityWidgetController, objectname);
                      print("object is" + objectname);
                      FireStoreFunctions.removeOldPurchase(FirebaseAuth.instance.currentUser, objectname);
                    },
                  ),
                )
              ],
            ),
          ));
        }
      }
    });
    
    return ListView(
      children: lst,
    );
  },
);

  }
}