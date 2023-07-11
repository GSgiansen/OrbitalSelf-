import 'package:flutter/material.dart';
import 'package:orbital_test_space/models/task.dart';
import 'package:uuid/uuid.dart';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';

import 'dart:convert';

class TaskProvider with ChangeNotifier {
  List<Task> _tasks = [];

  List<Task> get tasks => _tasks;

  var uuid = Uuid();

  Future<void> addTask(String title, String description, String category,
      DateTime dateTime) async {
    Task newTask = Task(
      id: uuid.v1(),
      title: title,
      description: description,
      category: category,
      dateTime: dateTime,
      isDone: false,
    );
    _tasks.insert(0, newTask);
    await saveData();
    notifyListeners();
  }

  void toggleDone(Task task) {
    task.isDone = !task.isDone;
    saveData();
    notifyListeners();
  }

  void deleteTask(Task task) {
    _tasks.remove(task);
    saveData();
    notifyListeners();
  }

  Future<void> loadData() async {
    User? user = FirebaseAuth.instance.currentUser;
    if (user != null) {
      DocumentSnapshot userSnapshot = await FirebaseFirestore.instance
          .collection('users')
          .doc(user.email)
          .get();

      if (userSnapshot.exists) {
        Map<String, dynamic>? userData =
            userSnapshot.data() as Map<String, dynamic>?;

        if (userData != null) {
          List<dynamic>? taskData = userData['todo'];
          if (taskData != null) {
            _tasks = taskData.map((data) => Task.fromMap(data)).toList();
          }
        }
      }
    }
    notifyListeners();
  }

  Future<void> saveData() async {
    User? user = FirebaseAuth.instance.currentUser;
    if (user != null) {
      List<Map<String, dynamic>> taskData =
          _tasks.map((task) => task.toMap()).toList();

      await FirebaseFirestore.instance.collection('users').doc(user.email).set(
        {'todo': taskData},
        SetOptions(merge: true),
      );
    }
  }
}
