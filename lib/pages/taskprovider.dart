import 'package:flutter/material.dart';
import 'package:shared_preferences/shared_preferences.dart';
import 'package:orbital_test_space/models/task.dart';
import 'package:uuid/uuid.dart';
import 'dart:convert';

class TaskProvider with ChangeNotifier {
  List<Task> _tasks = [];

  List<Task> get tasks => _tasks;

  var uuid = Uuid();

  void addTask(
      String title, String description, String category, DateTime dateTime) {
    _tasks.insert(
      0,
      Task(
        id: uuid.v1(),
        title: title,
        description: description,
        category: category,
        dateTime: dateTime,
        isDone: false,
      ),
    );
    saveData();
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

  void loadData() async {
    SharedPreferences prefs = await SharedPreferences.getInstance();
    List<String> stringTasks = prefs.getStringList('tasks') ?? [];
    _tasks = stringTasks.map((item) {
      Map<String, dynamic> jsonTask = jsonDecode(item);
      return Task.fromJson(jsonTask);
    }).toList();
    notifyListeners();
  }

  void saveData() async {
    List<String> stringTasks =
        _tasks.map((item) => jsonEncode(item.toJson())).toList();
    SharedPreferences prefs = await SharedPreferences.getInstance();
    prefs.setStringList('tasks', stringTasks);
  }
}
