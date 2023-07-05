import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:orbital_test_space/components/inventoryCard.dart';
import 'package:orbital_test_space/components/inventoryMenu.dart';
import 'package:orbital_test_space/main.dart';

import '../components/header.dart';
import '../components/shopcard.dart';
import '../models/item.dart';
import '../models/itemOwned.dart';

class PurchaseHistoryPage extends StatefulWidget {
  CurrencyNotifier currencyNotifier;
  User? user;
  PurchaseHistoryPage({super.key,
    required this.user,
  required this.currencyNotifier});
  @override
  _PurchaseHistoryPageState createState() => _PurchaseHistoryPageState();
}

class _PurchaseHistoryPageState extends State<PurchaseHistoryPage> {
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
    
    List<Widget> lst = []; // Declare the list here for ItemsOwn
    
    snapshot.data!.docs.forEach((DocumentSnapshot document) {
      Map<String, dynamic> data = document.data()! as Map<String, dynamic>;
      if (data.containsKey('items')) {
        Map<String, dynamic> items = data['items'] as Map<String, dynamic>;
        
        for (var item in items.entries) {
          Map<String, dynamic> indiv = item.value;

          lst.add(
            InventoryCard(
              item: ItemOwned(
                name: indiv["name"],
                number: indiv["number"],

          )
            )
          );
        }
      }
    });

    lst.add(
            //back button
      OutlinedButton(
        child: Text('Back'),
        style: ButtonStyle(
          backgroundColor: MaterialStateProperty.all<Color>(Color.fromARGB(255, 25, 139, 84)),
          foregroundColor: MaterialStateProperty.all<Color>(Colors.white),
        ),
        onPressed: () {
          Navigator.pop(context);
        },
      ),
    );

    

    return Scaffold(
      appBar: header(context, widget.currencyNotifier, true),
      body: Container(
        width: MediaQuery.of(context).size.width,
        height: MediaQuery.of(context).size.height,
        child: Column(
        mainAxisSize: MainAxisSize.min,
        children: lst,
        ),
      ),
    );
  }   
    );

    
  }
}
