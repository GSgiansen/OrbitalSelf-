import 'package:flutter/cupertino.dart';
import 'package:orbital_test_space/main.dart';


class UnityPage extends StatefulWidget {
  UnityPage({Key? key, required this.title, required this.itemsOwned, required this.currencyNotifier}) : super(key: key);

  final String title;
  final ItemsOwned itemsOwned;
  final CurrencyNotifier currencyNotifier;

  @override
  _UnityPageState createState() => _UnityPageState();
}

class _UnityPageState extends State<UnityPage> {
  @override
  Widget build(BuildContext context) {
    return Container();
  }
}