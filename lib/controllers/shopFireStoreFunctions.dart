import 'package:cloud_firestore/cloud_firestore.dart';


class ShopFireStore {
  static FirebaseFirestore db = FirebaseFirestore.instance;

  static getItemsInShop() async {
    return db
        .collection("Items")
        .get()
        .catchError((error) => print("Failed to retrieve items: $error"));

  }
}
