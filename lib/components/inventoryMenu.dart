import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:flutter/widgets.dart';
import 'package:orbital_test_space/components/inventory.dart';
import 'package:orbital_test_space/controllers/fireStoreFunctions.dart';

class InventoryMenu extends StatefulWidget {
  final User? user;
  InventoryMenu({required this.user});

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
        return ListView(
          children: snapshot.data!.docs.map((DocumentSnapshot document) {
            Map<String, dynamic> data =
                document.data()! as Map<String, dynamic>;
            if (data.containsKey('items')) {
              Map<String, dynamic> items =
                  data['items'] as Map<String, dynamic>;
              print(items);
              if (items.containsKey('cat') && items.containsKey('plant')) {
                return ListTile(
                  title: Text(items['cat']['name']),
                  subtitle: Text(items['plant']['name']),
                );
              }
            }
            // Return an empty container or null if the data is not as expected
            return Container();
          }).toList(),
        );
      },
    );
  }
}
