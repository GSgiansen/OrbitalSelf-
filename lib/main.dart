import 'package:flutter/material.dart';
import 'package:orbital_test_space/components/header.dart';
import 'package:orbital_test_space/models/item.dart';
import 'package:orbital_test_space/pages/login.dart';
import 'package:orbital_test_space/pages/purchasehistory.dart';
import 'package:orbital_test_space/pages/shoppage.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});
  //here should house all the user data when login is implemented

  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Flutter Demo',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: MyHomePage(title: 'Flutter Demo Home Page'),
    );
  }
}

class MyHomePage extends StatefulWidget {
  MyHomePage({super.key, required this.title});
  final String title;
  CurrencyNotifier currencyNotifier = CurrencyNotifier();
  ItemsOwned itemsOwned = ItemsOwned();

  @override
  State<MyHomePage> createState() => _MyHomePageState();
}

class _MyHomePageState extends State<MyHomePage> {
  int _counter = 0;

  void _incrementCounter() {
    setState(() {
      _counter++;
    });
  }

  @override
  Widget build(BuildContext context) {
    // This method is rerun every time setState is called, for instance as done
    // by the _incrementCounter method above.
    //
    // The Flutter framework has been optimized to make rerunning build methods
    // fast, so that you can just rebuild anything that needs updating rather
    // than having to individually change instances of widgets.
    return Scaffold(
      appBar: header(context, widget.currencyNotifier, true),
      body: Center(
        // Center is a layout widget. It takes a single child and positions it
        // in the middle of the parent.
        child: Column(
          // Column is also a layout widget. It takes a list of children and
          // arranges them vertically. By default, it sizes itself to fit its
          // children horizontally, and tries to be as tall as its parent.
          //
          // Invoke "debug painting" (press "p" in the console, choose the
          // "Toggle Debug Paint" action from the Flutter Inspector in Android
          // Studio, or the "Toggle Debug Paint" command in Visual Studio Code)
          // to see the wireframe for each widget.
          //
          // Column has various properties to control how it sizes itself and
          // how it positions its children. Here we use mainAxisAlignment to
          // center the children vertically; the main axis here is the vertical
          // axis because Columns are vertical (the cross axis would be
          // horizontal).
          mainAxisAlignment: MainAxisAlignment.center,
          children: <Widget>[
            Wrap(
              spacing: 8.0, // gap between adjacent chips
              runSpacing: 4.0, // gap between lines
              children: [
                Expanded(
                  child: ElevatedButton(
                    onPressed: () {
                      Navigator.push(
                        context,
                        MaterialPageRoute(
                            builder: (context) => MyLoginPage(title: "deez")),
                      );
                    },
                    child: const Text('Login Page'),
                  ),
                ),
                ElevatedButton(
                  onPressed: () {
                    Navigator.push(
                      context,
                      MaterialPageRoute(
                          builder: (context) => ShopPage(
                                title: "deez",
                                currencyNotifier: widget.currencyNotifier,
                                itemsOwned: widget.itemsOwned,
                              )),
                    );
                  },
                  child: const Text('Go to Shop Page'),
                ),
                ElevatedButton(
                  onPressed: () {
                    widget.currencyNotifier.increaseCurrency();
                  },
                  child: const Text('Increase Currency'),
                ),
                ElevatedButton(
                  onPressed: () {
                    Navigator.push(
                      context,
                      MaterialPageRoute(
                          builder: (context) => PurchaseHistoryPage(
                              itemsOwned: widget.itemsOwned)),
                    );
                  },
                  child: const Text('Past Purchases Page'),
                ),
              ],
            ),
          ],
        ),
      ),
      // This trailing comma makes auto-formatting nicer for build methods.
    );
  }
}

class CurrencyNotifier {
  ValueNotifier currency = ValueNotifier<int>(100);
  void increaseCurrency() {
    currency.value += 10;
  }

  void decreaseCurrency(int cost) {
    currency.value -= cost;
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
