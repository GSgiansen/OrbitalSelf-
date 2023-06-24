import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:flutter/material.dart';
import 'package:syncfusion_flutter_charts/charts.dart';
import 'package:syncfusion_flutter_charts/sparkcharts.dart';
import 'package:shared_preferences/shared_preferences.dart';
import 'package:flutter/services.dart';
import 'package:animated_text_kit/animated_text_kit.dart';
import 'package:orbital_test_space/models/sleepEntry.dart';
import 'dart:convert';

class SleepLoggingPage extends StatefulWidget {
  @override
  _SleepLoggingPageState createState() => _SleepLoggingPageState();
}

class _SleepLoggingPageState extends State<SleepLoggingPage> {
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
    SharedPreferences prefs = await SharedPreferences.getInstance();
    List<String>? stringSleepLogs = prefs.getStringList('sleepLogs');
    if (stringSleepLogs != null) {
      setState(() {
        _sleepLog = stringSleepLogs
            .map((stringSleepEntry) =>
                SleepEntry.fromMap(jsonDecode(stringSleepEntry)))
            .toList();
      });
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
    SharedPreferences prefs = await SharedPreferences.getInstance();
    List<String> stringSleepLogs =
        _sleepLog.map((entry) => jsonEncode(entry.toMap())).toList();
    await prefs.setStringList('sleepLogs', stringSleepLogs);
  }

  void _addSleepEntry() {
    final selectedDateOnly =
        DateTime(_selectedDate.year, _selectedDate.month, _selectedDate.day);

    _sleepLog.removeWhere((entry) {
      final entryDate = entry.date;
      final entryDateOnly =
          DateTime(entryDate.year, entryDate.month, entryDate.day);
      return entryDateOnly == selectedDateOnly;
    });

    showDialog(
      context: context,
      builder: (BuildContext context) {
        return AlertDialog(
          title: Text('Confirmation'),
          content: Text('Are you sure you want to submit?'),
          actions: <Widget>[
            TextButton(
              child: Text('Yes'),
              onPressed: () {
                Navigator.of(context).pop(); // Close the dialog
                setState(() {
                  _sleepLog.add(SleepEntry(
                    date: _selectedDate,
                    hoursOfSleep: double.parse(_textController.text),
                  ));
                  _saveSleepLog();
                });
                _textController.clear();
              },
            ),
            TextButton(
              child: Text('No'),
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
            SizedBox(
              height: 40,
            ),
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
            Container(
              width: 200,
              height: 50,
              child: TextField(
                controller: _textController,
                keyboardType: TextInputType.number,
                inputFormatters: <TextInputFormatter>[
                  FilteringTextInputFormatter.allow(RegExp(r'^\d+\.?\d*')),
                ],
                decoration: InputDecoration(
                  labelText: 'Hours of sleep',
                  filled: true,
                  fillColor: Colors.white,
                ),
              ),
            ),
            SizedBox(height: 10),
            Row(
              mainAxisAlignment: MainAxisAlignment.center,
              children: [
                ElevatedButton(
                  child: Text('Choose date',
                      style: TextStyle(fontFamily: 'Rotorcap')),
                  onPressed: _chooseDate,
                  style: ElevatedButton.styleFrom(
                      backgroundColor: Color(0xff5d6734)),
                ),
                SizedBox(width: 10),
                ElevatedButton(
                  child: Text('Log sleep',
                      style: TextStyle(fontFamily: 'Rotorcap')),
                  onPressed: _addSleepEntry,
                  style: ElevatedButton.styleFrom(
                      backgroundColor: Color(0xff5d6734)),
                ),
              ],
            ),
            SizedBox(height: 200),
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
