import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:orbital_test_space/components/insufficientfundsalert.dart';
import 'package:orbital_test_space/controllers/fireStoreFunctions.dart';
import 'package:orbital_test_space/main.dart';
import 'package:orbital_test_space/models/item.dart';

class ShopCard extends StatelessWidget {
  final User? user;
  CurrencyNotifier currencyNotifier;
  Item item;
  ShopCard({super.key, required this.currencyNotifier, 
            required this.user,
            required this.item,
            });

  //test data with Item Object
  @override
  Widget build(BuildContext context) {
    final cost = item.price;
    return Center(
      child: Card(
        child: Padding(
          padding: const EdgeInsets.all(8.0),
          child: Column(
            mainAxisSize: MainAxisSize.min,
            children: <Widget>[
              ListTile(
                leading: CircleAvatar(
                      backgroundImage:
                          AssetImage(item.image),
                      radius: 25,
                    ),
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
                        print(cost);
                        print(currencyNotifier.currency.value);

                        currencyNotifier.decreaseCurrency(cost);
                        FireStoreFunctions.removeOldCurrency(user, currencyNotifier.currency.value as int);
                        FireStoreFunctions.addNewPurchase(user, item.name);
                        print("Currency is ${currencyNotifier.currency.value}");
                        
                        
                      }
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