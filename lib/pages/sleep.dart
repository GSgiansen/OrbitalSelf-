import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:flutter/material.dart';
import 'package:orbital_test_space/models/SleepEntry.dart';
import 'package:syncfusion_flutter_charts/charts.dart';
import 'package:syncfusion_flutter_charts/sparkcharts.dart';
import 'package:shared_preferences/shared_preferences.dart';
import 'package:flutter/services.dart';

class SleepLoggingPage extends StatefulWidget {
  @override
  _SleepLoggingPageState createState() => _SleepLoggingPageState();
}

class _SleepLoggingPageState extends State<SleepLoggingPage> {
  final List<SleepEntry> _sleepLog = [];
  final TextEditingController _textController = TextEditingController();
  DateTime _selectedDate = DateTime.now();

  void _chooseDate() async {
    final DateTime? picked = await showDatePicker(
      context: context,
      initialDate: _selectedDate,
      firstDate: DateTime(2000, 1),
      lastDate: DateTime.now(),
    );
    if (picked != null && picked != _selectedDate)
      setState(() {
        _selectedDate = picked;
      });
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
      return 'You\'ve been getting less sleep lately. Try to get more sleep to feel refreshed!';
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
      body: Column(
        children: <Widget>[
          SizedBox(
            height: 40,
          ),
          SfCartesianChart(
            primaryXAxis: DateTimeAxis(
              visibleMinimum: weekAgo,
              visibleMaximum: today,
            ),
            series: <LineSeries>[
              LineSeries<SleepEntry, DateTime>(
                dataSource: pastWeekEntries,
                xValueMapper: (SleepEntry entry, _) => entry.date,
                yValueMapper: (SleepEntry entry, _) => entry.hoursOfSleep,
                name: 'Hours of sleep',
                markerSettings: MarkerSettings(isVisible: true),
              ),
            ],
          ),
          SizedBox(height: 60),
          Container(
              width: 200,
              child: TextField(
                controller: _textController,
                keyboardType: TextInputType.number,
                inputFormatters: <TextInputFormatter>[
                  FilteringTextInputFormatter.allow(RegExp(r'^\d+\.?\d*')),
                ],
                decoration: InputDecoration(
                  labelText: 'Hours of sleep',
                ),
              )),
          SizedBox(
            height: 10,
          ),
          ElevatedButton(
            child: Text('Choose date'),
            onPressed: _chooseDate,
          ),
          SizedBox(
            height: 10,
          ),
          ElevatedButton(
            child: Text('Log sleep'),
            onPressed: _addSleepEntry,
          ),
          SizedBox(
            height: 40,
          ),
          Text(computeSleepTrendMessage(pastWeekEntries)),
        ],
      ),
    );
  }
}
