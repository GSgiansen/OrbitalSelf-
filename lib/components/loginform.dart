import 'package:flutter/material.dart';

Widget LoginForm() {
  return Column(
    mainAxisSize: MainAxisSize.min,
    children: <Widget>[
      TextField(
        obscureText: false,
        decoration: InputDecoration(
          enabledBorder: OutlineInputBorder(
            borderSide: BorderSide(color: Color(0xFF338a3e)),
            borderRadius: BorderRadius.circular(25),
          ),
          focusedBorder: OutlineInputBorder(
            borderSide: BorderSide(color: Color(0xFF66BB6A)),
            borderRadius: BorderRadius.circular(25),
          ),
          labelText: 'Email',
          labelStyle: TextStyle(color: Color(0xFF338a3e)),
        ),
      ),
      SizedBox(height: 20),
      TextField(
        obscureText: true,
        decoration: InputDecoration(
          enabledBorder: OutlineInputBorder(
            borderSide: BorderSide(color: Color(0xFF338a3e)),
            borderRadius: BorderRadius.circular(25),
          ),
          focusedBorder: OutlineInputBorder(
            borderSide: BorderSide(color: Color(0xFF66BB6A)),
            borderRadius: BorderRadius.circular(25),
          ),
          labelText: 'Password',
          labelStyle: TextStyle(color: Color(0xFF338a3e)),
        ),
      ),
      SizedBox(height: 30),
      ElevatedButton(
        style: ButtonStyle(
          backgroundColor: MaterialStateProperty.all<Color>(Color(0xFF338a3e)),
          padding: MaterialStateProperty.all<EdgeInsetsGeometry>(
            EdgeInsets.symmetric(horizontal: 50, vertical: 15),
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
