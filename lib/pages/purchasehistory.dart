import 'package:flutter/material.dart';
import 'package:orbital_test_space/components/inventory.dart';
import 'package:orbital_test_space/main.dart';

import '../components/header.dart';

class PurchaseHistoryPage extends StatefulWidget {
  final ItemsOwned itemsOwned;
  CurrencyNotifier currencyNotifier;
  PurchaseHistoryPage({required this.itemsOwned,
  required CurrencyNotifier this.currencyNotifier});
  @override
  _PurchaseHistoryPageState createState() => _PurchaseHistoryPageState();
}

class _PurchaseHistoryPageState extends State<PurchaseHistoryPage> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: header(context, widget.currencyNotifier, true),
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: <Widget>[
            for (var item in widget.itemsOwned.items) 
            InventoryCard(item: item),
            ElevatedButton(
              onPressed: () {
                Navigator.pop(context);
              },
              child: Text('Back'),
            ),
          ],
        ),
      ),
    );
  }
}
