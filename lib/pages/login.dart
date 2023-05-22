import 'package:flutter/material.dart';
import 'package:orbital_test_space/components/loginform.dart';

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
      body: Container(
        decoration: BoxDecoration(
          gradient: LinearGradient(
            begin: Alignment.topRight,
            end: Alignment.bottomLeft,
            colors: [Color(0xFF66BB6A), Color(0xFF338a3e)],
          ),
        ),
        child: Padding(
          padding: EdgeInsets.all(40),
          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            children: <Widget>[
              Text(
                'Welcome to HealthQuest!',
                style: TextStyle(fontSize: 25, color: Colors.white),
              ),
              SizedBox(height: 20),
              LoginForm(),
              SizedBox(height: 20),
              TextButton(
                child: Text('Sign Up', style: TextStyle(color: Colors.white)),
                onPressed: () {},
              ),
            ],
          ),
        ),
      ),
    );
  }
}
