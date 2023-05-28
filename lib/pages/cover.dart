import 'package:flutter/material.dart';
import 'package:orbital_test_space/pages/login.dart';

class MyCoverPage extends StatefulWidget {
  const MyCoverPage({Key? key, required this.title}) : super(key: key);
  final String title;

  @override
  State<MyCoverPage> createState() => _MyCoverPageState();
}

class _MyCoverPageState extends State<MyCoverPage> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
        body: Stack(children: <Widget>[
      Container(
        decoration: BoxDecoration(
            image: DecorationImage(image: AssetImage('web/forest.jpg'))),
      ),
      Center(
          child: Column(
              mainAxisAlignment: MainAxisAlignment.center,
              children: <Widget>[
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
                      color: Colors.white),
                  children: [
                    TextSpan(text: 'EMBARK ON YOUR JOURNEY TO\n'),
                    WidgetSpan(child: SizedBox(height: 25)),
                    TextSpan(text: 'LEVEL UP YOUR LIFESTYLE.')
                  ],
                )),
            const SizedBox(height: 24),
            OutlinedButton(
              onPressed: () {
                Navigator.push(
                  context,
                  MaterialPageRoute(
                      builder: (context) => const MyLoginPage(title: "login")),
                );
              },
              style: OutlinedButton.styleFrom(
                  shape: RoundedRectangleBorder(
                    borderRadius: BorderRadius.circular(20),
                  ),
                  foregroundColor: Colors.white,
                  side: const BorderSide(width: 3.0, color: Colors.white),
                  backgroundColor: const Color(0xFF377256),
                  padding: const EdgeInsets.all(12.0),
                  textStyle: const TextStyle(
                    fontSize: 22,
                    fontFamily: 'Rotorcap',
                  )),
              child: const Text('GET STARTED'),
            ),
          ]))
    ]));
  }
}
