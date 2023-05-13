import 'package:flutter/material.dart';
import 'package:orbital_test_space/models/item.dart';

class InventoryCard extends StatelessWidget {
  //takes in an item and showcases its contents
  final Item item;
  const InventoryCard({Key? key, required this.item}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Card(
      child: ListTile(
        leading: item.image,
        title: Text(item.name),
        subtitle: Text(item.description),
      ),
    );
  }

}