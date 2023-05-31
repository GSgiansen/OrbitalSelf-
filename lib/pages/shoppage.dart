import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:flutter/material.dart';
import 'package:font_awesome_flutter/font_awesome_flutter.dart';
import 'package:orbital_test_space/components/shopcard.dart';
import 'package:orbital_test_space/main.dart';

import '../models/item.dart';

class ShopPage extends StatefulWidget {
  const ShopPage(
      {super.key,
      required this.user,
      required this.currencyNotifier,
      required this.itemsOwned});
  final String user;
  final CurrencyNotifier currencyNotifier;
  final ItemsOwned itemsOwned;

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
          print("has data");
          print(snapshot.data!.docs.length);
          List<Item> lst = [];
          for (var element in snapshot.data!.docs) {
            Map<String, dynamic> data = element.data() as Map<String, dynamic>;
            Item item = Item(
              name: data["name"],
              price: data["cost"],
              description: data["description"],
              image: data["image"],
            );
            lst.add(item);
          }
          for (var element in lst) {
            print(element.name);
          }
          return Scaffold(
              body: Center(
                child: Column(
                  mainAxisAlignment: MainAxisAlignment.center,
                  children: <Widget>[
                    for (var j = 0; j < lst.length; j ++)
                    ShopCard(
                        item: lst[j],
                        email: widget.user,
                        currencyNotifier: widget.currencyNotifier,
                        itemsOwned: widget.itemsOwned),
                    const Spacer(),
                  ],
                ),
              ),
              floatingActionButton: FloatingActionButton(
                onPressed: widget.currencyNotifier.increaseCurrency,
                child: const FaIcon(FontAwesomeIcons.plus),
              ));
          } else {
            return const Center(child: CircularProgressIndicator());
          }
        });
  }
}
