import 'package:flutter/material.dart';
import 'package:orbital_test_space/main.dart';

AppBar header(BuildContext context, CurrencyNotifier currencyNotifier, bool isAppTitle) {
  
    return AppBar(
      backgroundColor: Colors.blue,
        title: Text("Self++"),
        actions: <Widget>[

          ValueListenableBuilder(
            valueListenable: currencyNotifier.currency,
            builder: (context, value, child) {
              return Padding(
            padding: const EdgeInsets.all(10.0),
            child: Chip(
                avatar: CircleAvatar(
                    backgroundColor: Colors.grey.shade800,
                    child: const CircleAvatar(
                      backgroundImage: AssetImage('web/currency.png'),
                    )),
                label: Text('${value.toString()}')
                )
          );
            }
            )

        ],
      );
    ;
  }