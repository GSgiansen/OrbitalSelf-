import 'package:flutter/material.dart';

Center LoginForm() {
  return Center(
    child: Column(
      mainAxisSize: MainAxisSize.min,
      children: <Widget>[
        const Padding(
          padding: EdgeInsets.all(8.0),
          child: SizedBox(
            width: 250,
            child: TextField(
              
              obscureText: false,
              decoration: InputDecoration(
                border: OutlineInputBorder(),
                labelText: 'Email',
              ),
            ),
          ),
        ),
         const Padding(
           padding: EdgeInsets.all(8.0),
           child: SizedBox(
            width: 250,
            child: TextField(
              obscureText: true,
              decoration: InputDecoration(
                border: OutlineInputBorder(),
                labelText: 'Password',
              ),
            ),
                 ),
         ),
        ElevatedButton(
          onPressed: () {},
          child: Text('Login'),
        ),
      ],
    ),
  );
}