import 'package:flutter/material.dart';
import 'package:font_awesome_flutter/font_awesome_flutter.dart';
import 'package:orbital_test_space/components/shopcard.dart';
import 'package:orbital_test_space/components/header.dart';
import 'package:orbital_test_space/controllers/fireStoreFunctions.dart';
import 'package:orbital_test_space/main.dart';

class ShopPage extends StatefulWidget {
  ShopPage(
      {super.key,
      required this.user,
      required CurrencyNotifier this.currencyNotifier,
      required this.itemsOwned});
  final String user;
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
                  email: widget.user,
                  currencyNotifier: widget.currencyNotifier,
                  itemsOwned: widget.itemsOwned),
              const Spacer(),
            ],
          ),
        ),
        floatingActionButton: FloatingActionButton(
          onPressed:() {
            widget.currencyNotifier.increaseCurrency();
            FireStoreFunctions.addNewCurrency(widget.user, widget.currencyNotifier.currency.value as int);
          } ,
          child: const FaIcon(FontAwesomeIcons.plus),
        ));
  }
}
