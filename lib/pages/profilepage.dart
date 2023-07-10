import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:orbital_test_space/pages/cover.dart';
import 'package:orbital_test_space/pages/purchasehistory.dart';
import 'package:orbital_test_space/pages/unitypage.dart';

import '../main.dart';

class ProfilePage extends StatefulWidget {
  final User? user;
  final CurrencyNotifier currencyNotifier;
  const ProfilePage(
      {super.key,
      required this.user,
      required this.currencyNotifier,});

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
        backgroundColor: Color.fromARGB(255, 25, 139, 84),
        title: Text(widget.user!.email!),
      ),
      body: Center(
        child: SizedBox(
          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            children: <Widget>[
              ElevatedButton(
                onPressed: () async {
                  await FirebaseAuth.instance
                      .signOut()
                      .then((value) => Navigator.push(
                            context,
                            MaterialPageRoute(
                                builder: (context) =>
                                    const MyCoverPage(title: 'test')),
                          ));
                },
                child: const Text('get out'),
              ),
              const SizedBox(height: 10),
              ElevatedButton(
                onPressed: () {
                  Navigator.push(
                    context,
                    MaterialPageRoute(
                        builder: (context) => PurchaseHistoryPage(
                            user: widget.user,
                            currencyNotifier: widget.currencyNotifier)),
                  );
                },
                child: const Text('My Items'),
              ),
              const SizedBox(height: 10),
              ElevatedButton(
                onPressed: () async {
                  Navigator.push(
                    context,
                    MaterialPageRoute(
                        builder: (context) => UnityDemoScreen(
                              user: widget.user,
                              currencyNotifier: widget.currencyNotifier,
                            )),
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
