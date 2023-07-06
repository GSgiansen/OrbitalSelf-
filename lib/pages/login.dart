import 'package:flutter/material.dart';

class MyLoginPage extends StatefulWidget {
  const MyLoginPage({Key? key, required this.title}) : super(key: key);
  final String title;

  @override
  State<MyLoginPage> createState() => _MyLoginPageState();
}

class _MyLoginPageState extends State<MyLoginPage> {
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
                      fontFamily: 'Rotorcap',
                      fontSize: 95,
                      color: Colors.white)),
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
                            text: 'LOGIN\n',
                            style: TextStyle(fontSize: 0.05 * height)),
                        TextSpan(
                            text: 'TO CONTINUE',
                            style: TextStyle(fontSize: 0.03 * height))
                      ])),
              const SizedBox(height: 40),
            ])),
      )
    ]));
  }
}
