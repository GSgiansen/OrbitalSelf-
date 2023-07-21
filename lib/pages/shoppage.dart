import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:font_awesome_flutter/font_awesome_flutter.dart';
import 'package:orbital_test_space/components/shopcard.dart';
import 'package:orbital_test_space/controllers/fireStoreFunctions.dart';
import 'package:orbital_test_space/main.dart';

import '../models/item.dart';

class ShopPage extends StatefulWidget {
  const ShopPage(
      {super.key,
      required this.user,
      required this.currencyNotifier,});
  final User? user;
  final CurrencyNotifier currencyNotifier;

  @override
  State<ShopPage> createState() => _ShopPageState();
}

class _ShopPageState extends State<ShopPage> {
  final Widget _body = const CircularProgressIndicator();

  @override
  Widget build(BuildContext context) {
    Stream<QuerySnapshot> items =
        FirebaseFirestore.instance.collection('Items').snapshots();
    return StreamBuilder<QuerySnapshot>(
        stream: items,

        builder: (BuildContext context, AsyncSnapshot<QuerySnapshot> snapshot) {
          if (snapshot.hasData) {
          List<Item> lst = [];
          for (var element in snapshot.data!.docs) {
            Map<String, dynamic> data = element.data() as Map<String, dynamic>;
            print('item is here');      
            Item item = Item(
              name: data["name"],
              price: data["cost"],
              description: data["description"],
              image: 'assets/images/${data["name"]}.png',
              inventory: data["inventory"] // represents if shld spawn object into the game or not
            );
            lst.add(item);
          }
          return Scaffold(
              body: Center(
                child: Column(
                  mainAxisAlignment: MainAxisAlignment.center,
                  children: <Widget>[
                    for (var j = 0; j < lst.length; j ++)
                    ShopCard(
                        item: lst[j],
                        user: widget.user,
                        currencyNotifier: widget.currencyNotifier,),
                    const Spacer(),
                  ],
                ),
              ),
              floatingActionButton: FloatingActionButton(
                onPressed: () {
                  widget.currencyNotifier.increaseCurrency();
                  String email = '';
                  if (widget.user != null){
                    email = widget.user!.email.toString();
                  }

                  FireStoreFunctions.addNewCurrency(
                      email , widget.currencyNotifier.currency.value);
                },
                child: const FaIcon(FontAwesomeIcons.plus),
              ));
          } else {
            return const Center(child: CircularProgressIndicator());
          }
        });
  }
}
