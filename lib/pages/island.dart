import 'package:flutter/material.dart';
import 'package:orbital_test_space/pages/unitypage.dart';
import 'package:orbital_test_space/main.dart';
import 'package:firebase_auth/firebase_auth.dart';

class IslandPage extends StatefulWidget {
  IslandPage({
    super.key,
    required this.user,
    required this.currencyNotifier,
  });
  final User? user;
  final CurrencyNotifier currencyNotifier;

  @override
  State<IslandPage> createState() => __IslandPageState();
}

class __IslandPageState extends State<IslandPage> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Container(
        decoration: BoxDecoration(
          gradient: LinearGradient(
            begin: Alignment.topCenter,
            end: Alignment.bottomCenter,
            stops: [
              0.1,
              1.0
            ], // Set the stops to define color transition positions.
            colors: [
              Colors.green,
              Color(0xFF87CEEB), // Sky blue
            ],
          ),
        ),
        child: Center(
          // Center the button in the middle of the screen.
          child: ElevatedButton(
            onPressed: () async {
              Navigator.push(
                context,
                MaterialPageRoute(
                  builder: (context) => UnityDemoScreen(
                    user: widget.user,
                    currencyNotifier: widget.currencyNotifier,
                  ),
                ),
              );
            },
            child: const Text('Visit My Island!'),
          ),
        ),
      ),
    );
  }
}
