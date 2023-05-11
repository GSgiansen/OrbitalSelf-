import 'package:flutter/material.dart';


AppBar header(BuildContext context, int currency, bool isAppTitle) {
    return AppBar(

      backgroundColor: Colors.blue,
        title: Text("Self++"),
        actions: <Widget>[
          Padding(
            padding: const EdgeInsets.all(10.0),
            child: Chip(
                avatar: CircleAvatar(
                    backgroundColor: Colors.grey.shade800,
                    child: const CircleAvatar(
                      backgroundImage: AssetImage('web/currency.png'),
                    )),
                label: Text('$currency')),
          )
        ],
      );
    ;
  }