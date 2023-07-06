import 'package:flutter/material.dart';
import 'package:orbital_test_space/models/item.dart';

import '../models/itemOwned.dart';

class InventoryCard extends StatelessWidget {
  //takes in an item and showcases its contents
  final ItemOwned item;
  const InventoryCard({Key? key, required this.item}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Card(
      child: ListTile(
        leading: Container(
          width: 50,
          height: 50,
          decoration: BoxDecoration(
            image: DecorationImage(
              image: AssetImage('assets/images/${item.name.toLowerCase()}.png'),
              fit: BoxFit.cover,
            ),
            borderRadius: BorderRadius.circular(10),
          ),
        ),

        title: Text(item.name),
        subtitle: Text(item.number.toString()),
      ),
    );
  }
}