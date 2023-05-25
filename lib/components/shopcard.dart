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
  ShopCard({required CurrencyNotifier this.currencyNotifier, 
            required ItemsOwned this.itemsOwned,
            required String this.email
            });

  //test data with Item Object
  final Item doggo = Item(
    name: "Doggo",
    description: "The goodest of bois",
    price: 110,
    image: Image.asset('web/doggo.png'),
  );

  @override
  Widget build(BuildContext context) {
    return Center(
      child: Card(
        child: Padding(
          padding: const EdgeInsets.all(8.0),
          child: Column(
            mainAxisSize: MainAxisSize.min,
            children: <Widget>[
              const ListTile(
                leading: Text("imag"),
                title: Text('Doggo'),
                subtitle: Text('The goodest of bois'),
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
                      label: Text('$cost'),
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
                        FireStoreFunctions.addNewPurchase(email, doggo.name);
                        itemsOwned.addItem(doggo);
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