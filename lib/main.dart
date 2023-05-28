import 'dart:async';

import 'package:flutter/material.dart';
import 'package:orbital_test_space/components/header.dart';
import 'package:orbital_test_space/models/item.dart';
import 'package:orbital_test_space/pages/login.dart';
import 'package:orbital_test_space/pages/profilepage.dart';
import 'package:orbital_test_space/pages/purchasehistory.dart';
import 'package:orbital_test_space/pages/shoppage.dart';
import 'package:font_awesome_flutter/font_awesome_flutter.dart';
import 'package:firebase_core/firebase_core.dart';
import 'controllers/fireStoreFunctions.dart';
import 'firebase_options.dart';
import 'package:firebase_auth/firebase_auth.dart';

Future main() async {
  WidgetsFlutterBinding.ensureInitialized();
  await Firebase.initializeApp(
  options: DefaultFirebaseOptions.currentPlatform,
  );

  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});
  //here should house all the user data when login is implemented
  
  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    var auth = FirebaseAuth.instance;
    return MaterialApp(
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: StreamBuilder(
        stream: FirebaseAuth.instance.authStateChanges(),
        builder: (context, snapshot) {
          if (snapshot.hasData) {
            return MyHomePage(user: snapshot.data!.email.toString());
          } else {
            return const MyLoginPage(title: "HealthQuest");
          }
        },
      ),

    );
  }
}

class MyHomePage extends StatefulWidget {
  MyHomePage({super.key, required this.user});
  final String user;
  CurrencyNotifier currencyNotifier = CurrencyNotifier();
  
  ItemsOwned itemsOwned = ItemsOwned();

  @override
  State<MyHomePage> createState() => _MyHomePageState();
}

class _MyHomePageState extends State<MyHomePage> {
  int currentPageIndex = 2;
  @override
  void initState() {
    // TODO: implement initState
    FireStoreFunctions.getCurrentUserCurrency(email: widget.user).then((value) => widget.currencyNotifier.setValue(value));
  }
  @override
  Widget build(BuildContext context) {
    return Scaffold(
        appBar: header(context, widget.currencyNotifier, true),
        body: Center(
          child: _buildSelectedScreen(),
        ),
        bottomNavigationBar: BottomNavigationBar(
          selectedItemColor: Colors.green,
          currentIndex: currentPageIndex,
          onTap: (index) => setState(() => currentPageIndex = index),
          type: BottomNavigationBarType.fixed,
          items: const <BottomNavigationBarItem>[
            BottomNavigationBarItem(
              icon: Icon(Icons.store), // shop
              label: "Shop",
            ),
            BottomNavigationBarItem(
              icon: FaIcon(FontAwesomeIcons.bookMedical), //heath_and_safety
              label: "My Health",
            ),
            BottomNavigationBarItem(
              icon: FaIcon(FontAwesomeIcons.house),
              label: "My Island",
              activeIcon: FaIcon(FontAwesomeIcons.houseChimney),
            ),
            BottomNavigationBarItem(
              icon: Icon(Icons.people),
              label: "My Friends",
            ),
            BottomNavigationBarItem(
              icon: Icon(Icons.account_circle),
              label: "My Account",
            )
          ],
        ));
  }

  Widget _buildSelectedScreen() {
    switch (currentPageIndex) {
      case 0:
        return ShopPage(
            currencyNotifier: widget.currencyNotifier,
            itemsOwned: widget.itemsOwned,
            user: widget.user,
            );
      case 4:
        return ProfilePage(
            title: widget.user,
            currencyNotifier: widget.currencyNotifier,
            itemsOwned: widget.itemsOwned);
    }
    return Container();
  }
}


class CurrencyNotifier{
  //Todo, set currency to what is stored in the database
  ValueNotifier currency = ValueNotifier<int>(100);
  void increaseCurrency() {
    currency.value += 10;
  }

  void decreaseCurrency(int cost) {
    currency.value -= cost;
  }

  void setValue(int value) {
    currency.value = value;
  }


}



class ItemsOwned {
  List<Item> items = [];

  void addItem(Item item) {
    items.add(item);
  }

  void removeItem(Item item) {
    items.remove(item);
  }
}
