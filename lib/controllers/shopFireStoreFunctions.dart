import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_core/firebase_core.dart';

import '../models/item.dart';

class ShopFireStore {
  static FirebaseFirestore db = FirebaseFirestore.instance;

  static getItemsInShop() async {
    return db
        .collection("Items")
        .get()
        .catchError((error) => print("Failed to retrieve items: $error"));

  }
}
