import 'package:firebase_storage/firebase_storage.dart';
import 'package:flutter/material.dart';
import 'package:orbital_test_space/controllers/saveLocalFile.dart';

class UnityFireBase{
  static final storage = FirebaseStorage.instance;

  static CallTemplateScence() async {
    fetchFileFromStorage("templates/template_scene.unity");
  }
  static Future<String> fetchFileFromStorage(String filePath) async {


  try {
    // Create a reference to the file in Firebase Storage
    final ref = storage.ref().child(filePath);

    // Download the file as a byte array
    final downloadData = await ref.getData();

    saveFileToLocal();

    return "connected to firebase storage";
  } catch (e) {
    // Handle any errors that occur during the retrieval
    print('Error fetching file: $e');
    return "failed to get";
  }
}
}