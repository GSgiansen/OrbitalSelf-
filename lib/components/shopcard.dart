import 'package:flutter/material.dart';
import 'package:orbital_test_space/components/insufficientfundsalert.dart';

class ShopCard extends StatelessWidget {
  final int cost = 110;
  int currency = 0;
  ShopCard({required int this.currency});

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
                      currency <= cost
                          ? showDialog<String>(builder: (BuildContext context) => insufficientFunds(context), context: context)
                          : print("ALL G" + currency.toString());
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