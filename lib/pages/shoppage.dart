import 'package:flutter/material.dart';
import 'package:orbital_test_space/components/shopcard.dart';
import 'package:orbital_test_space/components/header.dart';
import 'package:orbital_test_space/main.dart';

class ShopPage extends StatefulWidget {
  ShopPage(
      {super.key,
      required this.title,
      required CurrencyNotifier this.currencyNotifier,
      required this.itemsOwned});
  final String title;
  final CurrencyNotifier currencyNotifier;
  final ItemsOwned itemsOwned;

  @override
  State<ShopPage> createState() => _ShopPageState();
}

class _ShopPageState extends State<ShopPage> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: <Widget>[
            ShopCard(
                currencyNotifier: widget.currencyNotifier,
                itemsOwned: widget.itemsOwned),
            const Spacer(),
          ],
        ),
      ),
    );
  }
}
