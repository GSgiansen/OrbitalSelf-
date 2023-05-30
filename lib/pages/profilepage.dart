import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:orbital_test_space/pages/login.dart';
import 'package:orbital_test_space/pages/purchasehistory.dart';
import 'package:orbital_test_space/pages/unitypage.dart';

import '../main.dart';

class ProfilePage extends StatefulWidget {
  final String title;
  final CurrencyNotifier currencyNotifier;
  final ItemsOwned itemsOwned;
  const ProfilePage(
      {super.key,
      required this.title,
      required this.currencyNotifier,
      required this.itemsOwned});

  @override
  State<ProfilePage> createState() => _ProfilePageState();
}

class _ProfilePageState extends State<ProfilePage> {
  //here should house all the user data when login is implemented
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        automaticallyImplyLeading: false,
        backgroundColor: Colors.blue,
        title: Text(widget.title),
      ),
      body: Center(
        child: SizedBox(
          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            children: <Widget>[
              ElevatedButton(
                onPressed: () {
                },
                child: const Text('Back'),
              ),
              const SizedBox(height: 10),  
              ElevatedButton(
                onPressed: () async {
                  await FirebaseAuth.instance
                      .signOut()
                      .then((value) => Navigator.push(
                            context,
                            MaterialPageRoute(
                                builder: (context) =>
                                    const MyLoginPage(title: "login")),
                          ));
                },
                child: const Text('gtfo'),
              ),
              const SizedBox(height: 10),  
              ElevatedButton(
                onPressed: () {
                  Navigator.push(
                    context,
                    MaterialPageRoute(
                        builder: (context) => PurchaseHistoryPage(
                            itemsOwned: widget.itemsOwned,
                            currencyNotifier: widget.currencyNotifier)),
                  );
                },
                child: const Text('My Items'),
              ),
              const SizedBox(height: 10),  
              ElevatedButton(
                onPressed: () {
                  Navigator.push(
                    context,
                    MaterialPageRoute(
                        builder: (context) => UnityPage(
                            title: "Unity",
                            itemsOwned: widget.itemsOwned,
                            currencyNotifier: widget.currencyNotifier)),
                  );
                },
                child: const Text('Unity'),
              ),

            ],
          ),
        ),
      ),
    );
  }
}
