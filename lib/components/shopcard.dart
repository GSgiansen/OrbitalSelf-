import 'package:flutter/material.dart';
import 'package:orbital_test_space/components/insufficientfundsalert.dart';
import 'package:orbital_test_space/controllers/fireStoreFunctions.dart';
import 'package:orbital_test_space/main.dart';
import 'package:orbital_test_space/models/item.dart';

class ShopCard extends StatelessWidget {
  final int cost = 110;
  final String email;
  CurrencyNotifier currencyNotifier;
  ItemsOwned itemsOwned;
  Item item;
  ShopCard({required CurrencyNotifier this.currencyNotifier, 
            required ItemsOwned this.itemsOwned,
            required String this.email,
            required Item this.item,
            });

  //test data with Item Object
  @override
  Widget build(BuildContext context) {
    return Center(
      child: Card(
        child: Padding(
          padding: const EdgeInsets.all(8.0),
          child: Column(
            mainAxisSize: MainAxisSize.min,
            children: <Widget>[
              ListTile(
                leading: Text("imag"),
                title: Text(item.name),
                subtitle: Text(item.description),
              ),
              Row(
                mainAxisAlignment: MainAxisAlignment.end,
                children: <Widget>[
                  Padding(
                    padding: const EdgeInsets.all(8.0),
                    child: Chip(
                      avatar: CircleAvatar(
                          backgroundColor: Colors.grey.shade800,
                          child: const CircleAvatar(
                            backgroundImage: AssetImage('web/currency.png'),
                          )),
                      label: Text(item.price.toString()),
                    ),
                  ),
                  FilledButton(
                    child: const Text('Buy'),
                    onPressed: () {
                      if (currencyNotifier.currency.value < cost) {
                        showDialog<String>(
                            builder: (BuildContext context) =>
                                insufficientFunds(context),
                            context: context);
                      } else {
                        currencyNotifier.decreaseCurrency(cost);
                        FireStoreFunctions.removeOldCurrency(email, currencyNotifier.currency.value as int);
                        FireStoreFunctions.addNewPurchase(email, item.name);
                        itemsOwned.addItem(item);
                        print("Currency is ${currencyNotifier.currency.value}");
                        
                        
                      };
                    },
                  ),
                  const SizedBox(width: 8),
                ],
              ),
            ],
          ),
        ),
      )
    
    );
  }
}