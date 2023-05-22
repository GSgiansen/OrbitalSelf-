import 'package:flutter/material.dart';

Widget LoginForm() {
  return Column(
    mainAxisSize: MainAxisSize.min,
    children: <Widget>[
      Container(
        decoration: BoxDecoration(
          color: Colors.white.withOpacity(0.3),
          borderRadius: BorderRadius.circular(25),
        ),
        child: TextField(
          style: TextStyle(color: Colors.white),
          obscureText: false,
          decoration: InputDecoration(
            border: OutlineInputBorder(
              borderSide: BorderSide.none,
              borderRadius: BorderRadius.circular(25),
            ),
            contentPadding: EdgeInsets.symmetric(horizontal: 20, vertical: 15),
            labelText: 'Email',
            labelStyle: TextStyle(color: Colors.white),
          ),
        ),
      ),
      SizedBox(height: 20),
      Container(
        decoration: BoxDecoration(
          color: Colors.white.withOpacity(0.3),
          borderRadius: BorderRadius.circular(25),
        ),
        child: TextField(
          style: TextStyle(color: Colors.white),
          obscureText: true,
          decoration: InputDecoration(
            border: OutlineInputBorder(
              borderSide: BorderSide.none,
              borderRadius: BorderRadius.circular(25),
            ),
            contentPadding: EdgeInsets.symmetric(horizontal: 20, vertical: 15),
            labelText: 'Password',
            labelStyle: TextStyle(color: Colors.white),
          ),
        ),
      ),
      SizedBox(height: 20),
      ElevatedButton(
        style: ButtonStyle(
          backgroundColor: MaterialStateProperty.all<Color>(Colors.green),
          padding: MaterialStateProperty.all<EdgeInsetsGeometry>(
            EdgeInsets.symmetric(horizontal: 100, vertical: 15),
          ),
          shape: MaterialStateProperty.all<RoundedRectangleBorder>(
            RoundedRectangleBorder(
              borderRadius: BorderRadius.circular(25),
            ),
          ),
        ),
        onPressed: () {},
        child: Text(
          'LOG IN',
          style: TextStyle(color: Colors.white),
        ),
      ),
    ],
  );
}
