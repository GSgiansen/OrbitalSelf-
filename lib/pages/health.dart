import 'dart:async';
import 'dart:math';

import 'package:orbital_test_space/controllers/fireStoreFunctions.dart';
import 'package:orbital_test_space/main.dart';
import 'package:animated_text_kit/animated_text_kit.dart';
import 'package:flutter/material.dart';
import 'package:getwidget/getwidget.dart';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:orbital_test_space/models/sleepEntry.dart';
import 'package:orbital_test_space/pages/pomodoro.dart';
import 'package:orbital_test_space/pages/sleep.dart';
import 'package:orbital_test_space/pages/todo.dart';
import 'package:orbital_test_space/pages/water.dart';

class MyHealthPage extends StatefulWidget {
  const MyHealthPage(
      {super.key, required this.user, required this.currencyNotifier});
  final User? user;
  final CurrencyNotifier currencyNotifier;

  @override
  _MyHealthPageState createState() => _MyHealthPageState();
}

class _MyHealthPageState extends State<MyHealthPage> {
  double _waterProgress = 0.0;
  double _sleepProgress = 0.0;
  double _productivityProgress = 0.0;
  int _completedPomodoroSessions = 0;
  int _completedSleepDays = 0;
  bool _isMounted = false;
  bool isTaskCompleted = false;
  String currentTask = '';
  List<String> tasks = ['Productivity', 'Sleep', 'Water'];

  Timer? _resetTaskTimer;

  @override
  void initState() {
    super.initState();
    _isMounted = true;
    _fetchData();

    final now = DateTime.now();
    final resetTime = DateTime(now.year, now.month, now.day + 1);
    final difference = resetTime.difference(now);
    _resetTaskTimer = Timer(difference, _resetTask);
  }

  @override
  void dispose() {
    _isMounted = false;
    _resetTaskTimer?.cancel();
    super.dispose();
  }

  Stream<DocumentSnapshot> _getUserDataStream() {
    User? user = FirebaseAuth.instance.currentUser;
    if (user != null) {
      return FirebaseFirestore.instance
          .collection('users')
          .doc(user.email)
          .snapshots();
    }
    return Stream.empty();
  }

  void _fetchData() async {
    await for (DocumentSnapshot snapshot in _getUserDataStream()) {
      if (snapshot.exists) {
        Map<String, dynamic>? userData =
            snapshot.data() as Map<String, dynamic>?;

        if (userData != null) {
          List<dynamic>? sleepLogsData = userData['sleep'];
          if (sleepLogsData != null) {
            List<SleepEntry> sleepEntries =
                sleepLogsData.map((data) => SleepEntry.fromMap(data)).toList();
            _calculateSleepProgress(sleepEntries);
          }

          double waterIntake = (userData?['Water'] ?? 0.0).toDouble();
          _calculateWaterProgress(waterIntake);

          int pomodoros = userData?['Pomodoro'] ?? 0;
          _calculateProductivityProgress(pomodoros);

          isTaskCompleted = userData?['CompletedTask'] ?? false;
          String task = userData?['dailyTask'] ?? "";
          if (task == "" && _isMounted) {
            final random = Random();
            _updateDailyTask();
          } else {
            if (_isMounted) {
              setState(() {
                currentTask = task;
              });
            }
          }
          DateTime dateTimenow = DateTime.now();
          String dateToday =
              DateTime(dateTimenow.year, dateTimenow.month, dateTimenow.day)
                  .toIso8601String();
          String now = userData['date'] ?? "";
          if (now == "" || now != dateToday) {
            refreshData();
            updateDate();
            _updateDailyTask();
          }
        }
      }
    }
  }

  void refreshData() async {
    User? user = FirebaseAuth.instance.currentUser;
    if (user != null) {
      await FirebaseFirestore.instance
          .collection('users')
          .doc(user.email)
          .update({'Pomodoro': 0, 'Water': 0, 'CompletedTask': false});
    }
  }

  void updateDate() async {
    User? user = FirebaseAuth.instance.currentUser;
    DateTime now = DateTime.now();
    String dateToday = DateTime(now.year, now.month, now.day).toIso8601String();
    if (user != null) {
      await FirebaseFirestore.instance
          .collection('users')
          .doc(user.email)
          .update({'date': dateToday});
    }
  }

  void _updateDailyTask() async {
    final random = Random();
    currentTask = tasks[random.nextInt(tasks.length)];
    User? user = FirebaseAuth.instance.currentUser;
    if (user != null) {
      await FirebaseFirestore.instance
          .collection('users')
          .doc(user.email)
          .update({'dailyTask': currentTask});
    }
  }

  void _updateTaskCompletion() async {
    User? user = FirebaseAuth.instance.currentUser;
    if (user != null) {
      await FirebaseFirestore.instance
          .collection('users')
          .doc(user.email)
          .update({'CompletedTask': true});
    }
  }

  void _calculateWaterProgress(double waterIntake) {
    const double dailyGoal = 2000.0;
    double progress = waterIntake / dailyGoal;
    if (progress > 1.0) {
      progress = 1.0;
    }
    if (_isMounted) {
      setState(() {
        _waterProgress = progress;
      });
    }
  }

  void _calculateSleepProgress(List<SleepEntry> sleepEntries) {
    DateTime today = DateTime.now();
    DateTime weekAgo = today.subtract(const Duration(days: 7));
    int sleepDays = 0;

    for (SleepEntry entry in sleepEntries) {
      if (entry.date.isAfter(weekAgo) && entry.date.isBefore(today)) {
        if (entry.hoursOfSleep >= 7) {
          sleepDays++;
        }
      }
    }
    if (_isMounted) {
      setState(() {
        _completedSleepDays = sleepDays;
        _sleepProgress = sleepDays / 7;
      });
    }
  }

  void _calculateProductivityProgress(int pomodoros) {
    double progress = pomodoros / 4;
    if (progress > 1.0) {
      progress = 1.0;
    }
    if (_isMounted) {
      setState(() {
        _productivityProgress = progress;
      });
    }
  }

  void _completeTask() {
    if (currentTask == 'Productivity') {
      if (_productivityProgress == 1.0) {
        _provideCoins(currentTask);
        setState(() {
          _updateTaskCompletion();
          isTaskCompleted = true;
        });
      }
      ;
    } else if (currentTask == 'Sleep') {
      if (_sleepProgress == 1.0) {
        _provideCoins(currentTask);
        setState(() {
          _updateTaskCompletion();
          isTaskCompleted = true;
        });
      }
      ;
    } else if (currentTask == 'Water') {
      if (_waterProgress == 1.0) {
        _provideCoins(currentTask);
        setState(() {
          _updateTaskCompletion();
          isTaskCompleted = true;
        });
      }
    }
  }

  void _provideCoins(String task) {
    widget.currencyNotifier.increaseByTask(task);
    FireStoreFunctions.addNewCurrency(
        widget.user!.email.toString(), widget.currencyNotifier.currency.value);
  }

  void _resetTask() {
    if (mounted) {
      setState(() {
        isTaskCompleted = false;
      });
    }
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Container(
        decoration: BoxDecoration(
          image: DecorationImage(
            image: AssetImage('web/health.png'),
            fit: BoxFit.cover,
          ),
        ),
        child: Padding(
          padding: const EdgeInsets.all(16.0),
          child: Column(
            children: <Widget>[
              SizedBox(height: 16),
              _buildTitleBox('Health'),
              SizedBox(height: 20.0),
              Column(
                crossAxisAlignment: CrossAxisAlignment.start,
                children: [
                  Text('Sleep'),
                  GFProgressBar(
                    percentage: _sleepProgress,
                    lineHeight: 20,
                    alignment: MainAxisAlignment.spaceBetween,
                    child: Text(
                      '${(_sleepProgress * 100).toStringAsFixed(0)}%',
                      textAlign: TextAlign.end,
                      style: TextStyle(fontSize: 16, color: Colors.black),
                    ),
                    backgroundColor: Colors.greenAccent,
                    progressBarColor: Colors.green,
                  ),
                ],
              ),
              SizedBox(height: 16),
              Column(
                crossAxisAlignment: CrossAxisAlignment.start,
                children: [
                  Text('Water'),
                  GFProgressBar(
                    percentage: _waterProgress,
                    lineHeight: 20,
                    alignment: MainAxisAlignment.spaceBetween,
                    child: Text(
                      '${(_waterProgress * 100).toStringAsFixed(0)}%',
                      textAlign: TextAlign.end,
                      style: TextStyle(fontSize: 16, color: Colors.black),
                    ),
                    backgroundColor: Colors.greenAccent,
                    progressBarColor: Colors.green,
                  ),
                ],
              ),
              SizedBox(height: 16),
              Column(
                crossAxisAlignment: CrossAxisAlignment.start,
                children: [
                  Text('Productivity'),
                  GFProgressBar(
                    percentage: _productivityProgress,
                    lineHeight: 20,
                    alignment: MainAxisAlignment.spaceBetween,
                    child: Text(
                      '${(_productivityProgress * 100).toStringAsFixed(0)}%',
                      textAlign: TextAlign.end,
                      style: TextStyle(fontSize: 16, color: Colors.black),
                    ),
                    backgroundColor: Colors.greenAccent,
                    progressBarColor: Colors.green,
                  ),
                ],
              ),
              SizedBox(height: 77.0),
              Column(
                children: [
                  _buildTitleBox('Tools'),
                  SizedBox(height: 20.0),
                  GridView.count(
                    crossAxisCount: 2,
                    childAspectRatio: 18.0 / 9.0,
                    mainAxisSpacing: 5.0,
                    crossAxisSpacing: 5.0,
                    shrinkWrap: true,
                    physics: NeverScrollableScrollPhysics(),
                    children: <Widget>[
                      _HealthCard(
                        title: 'Pomodoro',
                        imagePath: 'web/timer.png',
                        color: Color(0xffffdf88),
                        onPressed: () {
                          Navigator.push(
                            context,
                            MaterialPageRoute(
                              builder: (context) => PomodoroTimerPage(),
                            ),
                          );
                        },
                      ),
                      _HealthCard(
                        title: 'Sleep',
                        imagePath: 'web/sleep.png',
                        color: Color(0xffffdf88),
                        onPressed: () {
                          Navigator.push(
                            context,
                            MaterialPageRoute(
                              builder: (context) => SleepLoggingPage(),
                            ),
                          );
                        },
                      ),
                      _HealthCard(
                        title: 'Water',
                        imagePath: 'web/water.png',
                        color: Color(0xffffdf88),
                        onPressed: () {
                          Navigator.push(
                            context,
                            MaterialPageRoute(
                              builder: (context) => WaterIntakeApp(),
                            ),
                          );
                        },
                      ),
                      _HealthCard(
                        title: 'To Do List',
                        imagePath: 'web/book.png',
                        color: Color(0xffffdf88),
                        onPressed: () {
                          Navigator.push(
                            context,
                            MaterialPageRoute(
                              builder: (context) => ToDoPage(),
                            ),
                          );
                        },
                      ),
                    ],
                  ),
                ],
              ),
              SizedBox(height: 50),
              Padding(
                padding: EdgeInsets.only(left: 170),
                child: Container(
                  height: 75,
                  width: 250,
                  child: Column(
                    mainAxisAlignment: MainAxisAlignment.spaceBetween,
                    crossAxisAlignment: CrossAxisAlignment.start,
                    children: [
                      Expanded(
                        child: AnimatedTextKit(
                          repeatForever: true,
                          animatedTexts: [
                            TypewriterAnimatedText(
                              isTaskCompleted
                                  ? "Today's task has been completed!"
                                  : "Today's goal: Complete $currentTask bar.",
                            ),
                          ],
                        ),
                      ),
                      if (!isTaskCompleted)
                        Container(
                          height: 30,
                          child: ElevatedButton(
                            onPressed: () {
                              _completeTask();
                            },
                            child: Text('Complete'),
                          ),
                        ),
                    ],
                  ),
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }

  Widget _buildTitleBox(String title) {
    return Container(
      decoration: BoxDecoration(color: Colors.transparent),
      child: Padding(
        padding: const EdgeInsets.all(8.0),
        child: Text(
          title,
          style: TextStyle(fontSize: 20, color: Colors.white),
        ),
      ),
    );
  }
}

class _HealthCard extends StatelessWidget {
  final String title;
  final String imagePath;
  final Color color;
  final VoidCallback onPressed;

  const _HealthCard({
    required this.title,
    required this.imagePath,
    required this.color,
    required this.onPressed,
  });

  @override
  Widget build(BuildContext context) {
    return Card(
      shape: RoundedRectangleBorder(
        borderRadius: BorderRadius.circular(15.0),
      ),
      clipBehavior: Clip.antiAlias,
      child: Material(
        color: color,
        child: InkWell(
          onTap: onPressed,
          child: Center(
            child: Column(
              mainAxisSize: MainAxisSize.min,
              children: <Widget>[
                Image.asset(
                  imagePath,
                  width: 60,
                  height: 60,
                ),
                Text(
                  title,
                  style: TextStyle(fontSize: 20, color: Color(0xFF595b70)),
                  maxLines: 1,
                ),
              ],
            ),
          ),
        ),
      ),
    );
  }
}
