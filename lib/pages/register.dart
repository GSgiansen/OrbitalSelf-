import 'dart:async';

import 'package:firebase_auth/firebase_auth.dart';
import 'package:orbital_test_space/pages/login.dart';
import 'package:flutter/material.dart';

import '../components/registerform.dart';

class RegisterPage extends StatefulWidget {
  const RegisterPage({Key? key}) : super(key: key);
  @override
  State<RegisterPage> createState() => _RegisterPageState();
}

class _RegisterPageState extends State<RegisterPage> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
        body: Stack(children: <Widget>[
      Container(
        decoration: BoxDecoration(
            image: DecorationImage(image: AssetImage('web/forest_login.jpg'))),
      ),
      Center(
          child: Column(
              mainAxisAlignment: MainAxisAlignment.start,
              children: <Widget>[
            const SizedBox(height: 90.0),
            const Text('SELF++',
                style: TextStyle(
                    fontFamily: 'Rotorcap', fontSize: 95, color: Colors.white)),
            const SizedBox(height: 10.0),
            RichText(
                textAlign: TextAlign.center,
                text: const TextSpan(
                  style: TextStyle(
                      fontFamily: 'Rotorcap',
                      fontSize: 22,
                      color: Color(0xFFd8ead7)),
                  children: [
                    TextSpan(text: 'EMBARK ON YOUR JOURNEY TO\n'),
                    WidgetSpan(child: SizedBox(height: 25)),
                    TextSpan(text: 'LEVEL UP YOUR LIFESTYLE.')
                  ],
                )),
            const SizedBox(height: 180),
            RichText(
                textAlign: TextAlign.center,
                text: const TextSpan(
                    style: TextStyle(
                        fontFamily: 'Rotorcap', color: Color(0xFF5c5a71)),
                    children: [
                      TextSpan(
                          text: 'WELCOME\n', style: TextStyle(fontSize: 60)),
                      TextSpan(
                          text: 'JOIN US NOW!', style: TextStyle(fontSize: 22))
                    ])),
            const SizedBox(height: 40),
            registerForm(context, true),
            const SizedBox(height: 5),
            TextButton(
              child: Text('FORGOT PASSWORD',
                  style: TextStyle(
                      color: Colors.black,
                      fontFamily: 'Rotorcap',
                      fontSize: 16)),
              style: TextButton.styleFrom(
                backgroundColor: Color(0xFFF4F4F4),
              ),
              onPressed: () {},
            ),
            Padding(
                padding: const EdgeInsets.only(left: 100),
                child: Row(children: [
                  TextButton(
                      onPressed: () {
                        Navigator.push(
                            context,
                            MaterialPageRoute(
                                builder: (context) =>
                                    const MyLoginPage(title: 'test')));
                      },
                      child: const Text('ALREADY HAVE AN ACCOUNT?',
                          style: TextStyle(
                              color: Colors.black,
                              fontFamily: 'Rotorcap',
                              fontSize: 16,
                              decoration: TextDecoration.underline)))
                ]))
          ]))
    ]));
  }
}
