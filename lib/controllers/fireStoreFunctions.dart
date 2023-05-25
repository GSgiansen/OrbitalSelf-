
import 'package:cloud_firestore/cloud_firestore.dart';

class FireStoreFunctions {
  static FirebaseFirestore db = FirebaseFirestore.instance;
  static addNewUser(String email, String password) {
    return db
        .collection("users")
        .doc(email)
        .set({
          "email": email,
          "password": password,
        })
        .then((value) => print("User Added to Firestore"))
        .catchError((error) => print("Failed to add user: $error"));
  }

  static Future<void> addNewPurchase(String email, String item) {
    return db
        .collection("users")
        .doc(email)
        .collection("purchases")
        .doc(item)
        .set({
          "item": item,
        })
        .then((value) => print("Purchase Added"))
        .catchError((error) => print("Failed to add purchase: $error"));
  }

  static Future<void> addNewCurrency(String email, int currency) {
    return db
        .collection("users")
        .doc(email)
        .collection("currency")
        .doc("currency")
        .set({
          "currency": currency,
        })
        .then((value) => print("Currency Added"))
        .catchError((error) => print("Failed to add currency: $error"));
  }

}