
import 'dart:convert';

import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';
import 'package:orbital_test_space/controllers/unityContoller.dart';

Future<void> loadInventoryFromFirebase(UnityWidgetController? _unityWidgetController) async {
  
    User? user = FirebaseAuth.instance.currentUser;
    if (user != null) {

      DocumentSnapshot userSnapshot = await FirebaseFirestore.instance
          .collection('users')
          .doc(user.email)
          .get();
      if (userSnapshot.exists) {
        Map<String, dynamic>? userData =
            userSnapshot.data() as Map<String, dynamic>?;
        var inv = userData?['items'];
        if (inv != null) {
          String  jsonmap = jsonEncode(inv);
          loadInventoryToUnity(_unityWidgetController, jsonmap);
        }
    }
  }
}
  