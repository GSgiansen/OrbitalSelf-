import 'package:flutter/material.dart';

class Item {
  final String name;
  final String description;
  final int price;
  final Image image;

  Item({
    required this.name,
    required this.description,
    required this.price,
    required this.image,
  });
}