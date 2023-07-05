import 'package:flutter/material.dart';
import 'package:orbital_test_space/components/inventory.dart';
import 'package:orbital_test_space/main.dart';

import '../components/header.dart';

class PurchaseHistoryPage extends StatefulWidget {
  CurrencyNotifier currencyNotifier;
  PurchaseHistoryPage({super.key,
  required this.currencyNotifier});
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
            ElevatedButton(
              onPressed: () {
                Navigator.pop(context);
              },
              child: const Text('Back'),
            ),
          ],
        ),
      ),
    );
  }
}
