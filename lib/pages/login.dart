import 'package:flutter/material.dart';
import 'package:orbital_test_space/components/loginform.dart';

class MyLoginPage extends StatefulWidget {
  //const MyLoginPage({Key? key}) : super(key: key);
  const MyLoginPage({super.key, required this.title});
  final String title;

  @override
  State<MyLoginPage> createState() => _MyLoginPageState();
}

class _MyLoginPageState extends State<MyLoginPage> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: <Widget>[
            const Text(
              'Sign In',
              style: TextStyle(fontSize: 30),
            ),
            LoginForm(),
          ],
        ),
      ),
    );
  }
}
