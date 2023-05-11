import 'package:flutter/material.dart';

AlertDialog insufficientFunds(BuildContext context) {
  return AlertDialog(
    title: const Text('Insufficient Funds'),
    content: SingleChildScrollView(
      child: ListBody(
        children: const <Widget>[
          Text('You do not have enough currency to purchase this item.'),
        ],
      ),
    ),
    actions: <Widget>[
      TextButton(
        child: const Text('OK'),
        onPressed: () {
          Navigator.of(context).pop();
        },
      ),
    ],
  );
}