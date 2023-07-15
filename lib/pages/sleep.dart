import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:flutter/material.dart';
import 'package:syncfusion_flutter_charts/charts.dart';
import 'package:syncfusion_flutter_charts/sparkcharts.dart';
import 'package:shared_preferences/shared_preferences.dart';
import 'package:flutter/services.dart';
import 'package:animated_text_kit/animated_text_kit.dart';
import 'package:orbital_test_space/models/sleepEntry.dart';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';

import 'dart:convert';

class SleepLoggingPage extends StatefulWidget {
  @override
  _SleepLoggingPageState createState() => _SleepLoggingPageState();
}

class _SleepLoggingPageState extends State<SleepLoggingPage> {
  int _selectedHours = 7;
  List<SleepEntry> _sleepLog = [];
  final TextEditingController _textController = TextEditingController();
  DateTime _selectedDate = DateTime.now();
  Future<void>? _loadDataFuture;

  @override
  void initState() {
    super.initState();
    _loadDataFuture = _loadSleepLog();
  }

  Future<void> _loadSleepLog() async {
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
          List<dynamic>? sleepLogsData = userData['sleep'];
          if (sleepLogsData != null) {
            setState(() {
              _sleepLog = sleepLogsData
                  .map((data) => SleepEntry.fromMap(data))
                  .toList();
            });
          }
        }
      }
    }
  }

  void _chooseDate() async {
    final DateTime? picked = await showDatePicker(
      context: context,
      initialDate: _selectedDate,
      firstDate: DateTime(2000, 1),
      lastDate: DateTime.now(),
    );
    if (picked != null && picked != _selectedDate) {
      setState(() {
        _selectedDate = picked;
      });
    }
  }

  Future<void> _saveSleepLog() async {
    User? user = FirebaseAuth.instance.currentUser;
    if (user != null) {
      List<Map<String, dynamic>> sleepLogsData =
          _sleepLog.map((entry) => entry.toMap()).toList();

      await FirebaseFirestore.instance.collection('users').doc(user.email).set(
        {'sleep': sleepLogsData},
        SetOptions(merge: true),
      );
    }
  }

  void _addSleepEntry() {
    showDialog(
      context: context,
      builder: (BuildContext context) {
        return AlertDialog(
          title: Text('Confirmation'),
          content: Column(
            mainAxisSize: MainAxisSize.min,
            children: <Widget>[
              Text('Are you sure you want to submit?',
                  style: TextStyle(color: Colors.black)),
            ],
          ),
          actions: <Widget>[
            TextButton(
              child: Text('Submit'),
              onPressed: () {
                Navigator.of(context).pop(); // Close the dialog

                setState(() {
                  final selectedDateOnly = DateTime(_selectedDate.year,
                      _selectedDate.month, _selectedDate.day);
                  int existingEntryIndex = _sleepLog.indexWhere((entry) =>
                      DateTime(
                          entry.date.year, entry.date.month, entry.date.day) ==
                      selectedDateOnly);

                  if (existingEntryIndex != -1) {
                    // Update existing entry
                    _sleepLog[existingEntryIndex] = SleepEntry(
                      date: _selectedDate,
                      hoursOfSleep: _selectedHours.toDouble(),
                    );
                  } else {
                    // Add new entry
                    _sleepLog.add(SleepEntry(
                      date: _selectedDate,
                      hoursOfSleep: _selectedHours.toDouble(),
                    ));
                  }

                  _saveSleepLog();
                });
              },
            ),
            TextButton(
              child: Text('Cancel'),
              onPressed: () {
                Navigator.of(context).pop(); // Close the dialog
              },
            ),
          ],
        );
      },
    );
  }

  String computeSleepTrendMessage(List<SleepEntry> pastWeekEntries) {
    if (pastWeekEntries.isEmpty) {
      return 'No sleep data for the past week.';
    }

    double sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0;
    for (var i = 0; i < pastWeekEntries.length; i++) {
      double x = i.toDouble(); // We use the index as the x-coordinate
      double y = pastWeekEntries[i].hoursOfSleep;

      sumX += x;
      sumY += y;
      sumXY += x * y;
      sumX2 += x * x;
    }

    double slope = (pastWeekEntries.length * sumXY - sumX * sumY) /
        (pastWeekEntries.length * sumX2 - sumX * sumX);
    double yIntercept = (sumY - slope * sumX) / pastWeekEntries.length;

    if (slope > 0) {
      return 'Great job! You\'re getting more sleep!';
    } else if (slope < 0) {
      return 'You\'ve been getting less sleep lately... Try to get more sleep to feel refreshed!';
    } else if (yIntercept >= 7) {
      return 'You\'re getting at least 7 hours of sleep. Keep it up!';
    } else {
      return 'Try to get more sleep, minimally 7 hours a day.';
    }
  }

  @override
  Widget build(BuildContext context) {
    _sleepLog.sort((a, b) =>
        a.date.compareTo(b.date)); // ensure entries are in chronological order

    final today = DateTime.now();
    final weekAgo = DateTime.now().subtract(Duration(days: 7));

    final pastWeekEntries =
        _sleepLog.where((entry) => entry.date.isAfter(weekAgo)).toList();

    return Scaffold(
      appBar: AppBar(
        title: Text('Sleep Logging'),
      ),
      body: Container(
        decoration: BoxDecoration(
          image: DecorationImage(
            image: AssetImage('web/sleepui.png'),
            fit: BoxFit.cover,
          ),
        ),
        child: Column(
          children: <Widget>[
            SizedBox(height: 40),
            FutureBuilder<void>(
              future: _loadDataFuture,
              builder: (context, snapshot) {
                if (snapshot.connectionState == ConnectionState.done) {
                  return SfCartesianChart(
                    primaryXAxis: DateTimeAxis(
                      visibleMinimum: weekAgo,
                      visibleMaximum: today,
                      labelStyle: TextStyle(color: Colors.white, fontSize: 14),
                      majorGridLines: MajorGridLines(width: 0),
                    ),
                    primaryYAxis: NumericAxis(
                      labelStyle: TextStyle(color: Colors.white, fontSize: 14),
                      majorGridLines: MajorGridLines(width: 0),
                    ),
                    series: <LineSeries>[
                      LineSeries<SleepEntry, DateTime>(
                        dataSource: pastWeekEntries,
                        xValueMapper: (SleepEntry entry, _) => entry.date,
                        yValueMapper: (SleepEntry entry, _) =>
                            entry.hoursOfSleep,
                        name: 'Hours of sleep',
                        color: Colors.white,
                        width: 2,
                        markerSettings: MarkerSettings(isVisible: true),
                      ),
                    ],
                  );
                } else {
                  return CircularProgressIndicator();
                }
              },
            ),
            SizedBox(height: 60),
            Row(
              mainAxisAlignment: MainAxisAlignment.center,
              children: [
                Text(
                  'I slept for',
                  style: TextStyle(fontSize: 18, color: Colors.white),
                ),
                SizedBox(width: 10),
                Container(
                  decoration: BoxDecoration(
                    borderRadius: BorderRadius.circular(5.0),
                    color: Colors.white,
                  ),
                  padding: EdgeInsets.symmetric(horizontal: 10),
                  child: DropdownButton<int>(
                    isDense: true,
                    value: _selectedHours,
                    items: List.generate(25, (index) {
                      return DropdownMenuItem<int>(
                        value: index,
                        child: Text('$index hours',
                            style: TextStyle(color: Colors.black)),
                      );
                    }),
                    onChanged: (value) {
                      setState(() {
                        _selectedHours = value!;
                      });
                    },
                  ),
                ),
              ],
            ),
            SizedBox(height: 10),
            Row(
              mainAxisAlignment: MainAxisAlignment.center,
              children: [
                Text(
                  'on',
                  style: TextStyle(fontSize: 18, color: Colors.white),
                ),
                SizedBox(width: 10),
                Text(
                  _selectedDate.toString().substring(0, 10),
                  style: TextStyle(fontSize: 18, color: Colors.white),
                ),
                SizedBox(width: 10),
                ElevatedButton(
                  child: Text('Choose Date'),
                  onPressed: _chooseDate,
                ),
              ],
            ),
            SizedBox(height: 20),
            ElevatedButton(
              child: Text('Log Sleep'),
              onPressed: _addSleepEntry,
            ),
            SizedBox(height: 150),
            Padding(
              padding: EdgeInsets.only(left: 130),
              child: Container(
                height: 100,
                width: 200,
                child: AnimatedTextKit(
                  repeatForever: true,
                  animatedTexts: [
                    TypewriterAnimatedText(
                      computeSleepTrendMessage(pastWeekEntries),
                    ),
                  ],
                ),
              ),
            ),
          ],
        ),
      ),
    );
  }
}
