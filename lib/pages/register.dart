
import 'package:orbital_test_space/pages/login.dart';
import 'package:flutter/material.dart';

import '../components/loginform.dart';


class RegisterPage extends StatefulWidget {
  const RegisterPage({Key? key}) : super(key: key);
  @override
  State<RegisterPage> createState() => _RegisterPageState();
}

class _RegisterPageState extends State<RegisterPage> {
  @override
  Widget build(BuildContext context) {
    var height = MediaQuery.of(context).size.height;
    var width = MediaQuery.of(context).size.width;

    return Scaffold(
        body: ListView(children: <Widget>[
      Container(
        decoration: const BoxDecoration(
            image: DecorationImage(image: AssetImage('web/forest_login.jpg'))
            ),

      child: Center(
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
                text: TextSpan(
                    style: TextStyle(
                        fontFamily: 'Rotorcap', 
                        color: const Color(0xFF5c5a71), 
                        fontSize: 0.08 * height),
                    children: [
                      //make the text responsive to screen size
                      TextSpan(
                          text: 'Welcome\n',
                          style: TextStyle(fontSize: 0.05 * height)),
                      TextSpan(
                          text: 'TO SELF++',
                          style: TextStyle(fontSize: 0.03 * height))
                    ])),
            const SizedBox(height: 40),
            LoginForm(context, true),
            const SizedBox(height: 5),
            TextButton(
              style: TextButton.styleFrom(
                backgroundColor: const Color(0xFFF4F4F4),
              ),
              onPressed: () {},
              child: const Text('FORGOT PASSWORD',
                  style: TextStyle(
                      color: Colors.black,
                      fontFamily: 'Rotorcap',
                      fontSize: 16)
                      ),
            ),
            Row(
              mainAxisAlignment: MainAxisAlignment.center,
              crossAxisAlignment: CrossAxisAlignment.center,
              children: [
              const Text("HAVE AN ACCOUNT?",
                  style: TextStyle(
                      color: Colors.black,
                      fontFamily: 'Rotorcap',
                      fontSize: 16)),
              TextButton(
                  onPressed: () {
                    Navigator.push(
                        context,
                        MaterialPageRoute(
                            builder: (context) => const MyLoginPage(title: 'login',)));
                  },
                  child: const Text('LOGIN',
                      style: TextStyle(
                          color: Colors.black,
                          fontFamily: 'Rotorcap',
                          fontSize: 16,
                          decoration: TextDecoration.underline)))
            ]
            )
          ]
          )
      ),
          )
    ])
    );
  }

}
