import 'package:flutter/material.dart';
import 'package:orbital_test_space/components/shopcard.dart';
import 'package:orbital_test_space/components/header.dart';
import 'package:orbital_test_space/main.dart';
class ShopPage extends StatefulWidget {
  ShopPage({super.key, required this.title, required CurrencyNotifier this.currencyNotifier,});
  final String title;
  final CurrencyNotifier currencyNotifier;

  @override
  State<ShopPage> createState() => _ShopPageState();
}

class _ShopPageState extends State<ShopPage> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: header(context, widget.currencyNotifier, false),
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: <Widget>[
            ShopCard(currencyNotifier: widget.currencyNotifier,),
            const Spacer(),
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