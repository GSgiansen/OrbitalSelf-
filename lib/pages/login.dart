import 'package:flutter/material.dart';
import 'package:orbital_test_space/components/loginform.dart';
import 'package:orbital_test_space/pages/register.dart';

import '../controllers/authFunctions.dart';

class MyLoginPage extends StatefulWidget {
  const MyLoginPage({Key? key, required this.title}) : super(key: key);
  final String title;

  @override
  State<MyLoginPage> createState() => _MyLoginPageState();
}

class _MyLoginPageState extends State<MyLoginPage> {

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
                    'Welcome to',
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
                child: LoginForm(context, true),
              ),
              Expanded(
                flex: 1,
                child: Row(
                  mainAxisAlignment: MainAxisAlignment.spaceBetween,
                  children: [
                    TextButton(
                      child: Text('Create an account',
                          style: TextStyle(color: Color(0xFF338a3e))),
                      onPressed: () {
                          Navigator.push(context,
                          MaterialPageRoute(builder: (context) => const RegisterPage()),
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
