import 'dart:async';

import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:orbital_test_space/pages/login.dart';

import '../components/loginform.dart';

class RegisterPage extends StatefulWidget {
  const RegisterPage({Key? key}) : super(key: key);
  @override
  State<RegisterPage> createState() => _RegisterPageState();
}

class _RegisterPageState extends State<RegisterPage> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: SafeArea(
        child: Container(
          color: Colors.white,
          padding: EdgeInsets.all(40),
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.start,
            children: <Widget>[
              Expanded(
                flex: 1,
                child: Container(
                  alignment: Alignment.bottomLeft,
                  child: Text(
                    'New to Self++? Join us now!',
                    style: TextStyle(fontSize: 28, color: Color(0xFF338a3e)),
                  ),
                ),
              ),
              Expanded(
                  flex: 2,
                  child: Image.asset(
                    'web/logo3.png',
                  )),
              Expanded(
                flex: 4,
                child: LoginForm(false),
              ),
              Expanded(
                flex: 1,
                child: Row(
                  mainAxisAlignment: MainAxisAlignment.spaceBetween,
                  children: [
                    TextButton(
                      child: Text('Already have an account?',
                          style: TextStyle(color: Color(0xFF338a3e))),
                      onPressed: () {
                        Navigator.push(
                          context,
                          MaterialPageRoute(
                              builder: (context) => MyLoginPage(title:"login")),
                        );
                        // TODO: Navigate to Create an Account page
                      },
                    ),
                    TextButton(
                      child: Text('Forgot password?',
                          style: TextStyle(color: Color(0xFF338a3e))),
                      onPressed: () {
                        // TODO: Navigate to Forgot Password page
                      },
                    ),
                  ],
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }
}
