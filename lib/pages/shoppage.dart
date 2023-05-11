import 'package:flutter/material.dart';
import 'package:orbital_test_space/components/shopcard.dart';
import 'package:orbital_test_space/components/header.dart';
class ShopPage extends StatefulWidget {
  ShopPage({super.key, required this.title, required this.currency});
  final String title;
  final int currency;

  @override
  State<ShopPage> createState() => _ShopPageState();
}

class _ShopPageState extends State<ShopPage> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: header(context, widget.currency, false),
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: <Widget>[
            ShopCard(currency: widget.currency,),
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