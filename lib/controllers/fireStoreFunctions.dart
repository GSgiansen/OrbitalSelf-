
import 'package:cloud_firestore/cloud_firestore.dart';

import '../models/item.dart';

class FireStoreFunctions {

  static FirebaseFirestore db = FirebaseFirestore.instance;


  static getCurrentUser(String email) {
    return FirebaseFirestore.instance
        .collection("users")
        .doc(email)
        .get()
        .then((value) => print("User Retrieved"))
        .catchError((error) => print("Failed to retrieve user: $error"));
  }
  static getCurrentUserCurrency({required String email}) {
    return db
        .collection("users")
        .doc(email)
        .get()
        .then((DocumentSnapshot documentSnapshot) {
          if (documentSnapshot.exists) {
            print(documentSnapshot.get("currency"));
            return documentSnapshot.get("currency");
          } else {
            print("0");
          }
        })
        .catchError((error) => print("Failed to retrieve user: $error"));
  }


  
  static addNewUser(String email, String password) {
    return db
        .collection("users")
        .doc(email)
        .set({
          "email": email,
          "password": password,
          "currency": 0,
          "items": List<Item>.empty(growable: true),
        })
        .then((value) => print("User Added to Firestore"))
        .catchError((error) => print("Failed to add user: $error"));
  }

  static addNewPurchase(String email, String item) {
    return db
        .collection("users")
        .doc(email)
        .set(
          {
            "items": FieldValue.arrayUnion([item]),
          },
          SetOptions(merge: true),
        )
        .then((value) => print("Purchase Added"))
        .catchError((error) => print("Failed to add purchase: $error"));
  }

  static addNewCurrency(String email, int currency) {
    return db
        .collection("users")
        .doc(email)
        .set({
          "currency": currency,
        },
        SetOptions(merge: true)
        )
        .then((value) => print("Currency Added to Firestore"))
        .catchError((error) => print("Failed to add currency: $error"));
  }

  static removeOldCurrency(String email, int currency) {
    return db
        .collection("users")
        .doc(email)
        .set({
          "currency": currency,
        },
        SetOptions(merge: true)
        )
        .then((value) => print("Currency Removed"))
        .catchError((error) => print("Failed to remove currency: $error"));
  }

}