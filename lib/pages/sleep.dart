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

  void _addSleepEntry() {
    final today = DateTime.now();
    final todayDateOnly = DateTime(today.year, today.month, today.day);

    if (_sleepLog.any((entry) {
      final entryDate = entry.date;
      final entryDateOnly =
          DateTime(entryDate.year, entryDate.month, entryDate.day);
      return entryDateOnly == todayDateOnly;
    })) {
      ScaffoldMessenger.of(context).showSnackBar(SnackBar(
        content: Text('You have already logged sleep for today.'),
      ));
    } else {
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
                      date: DateTime.now(),
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
  }

  @override
  Widget build(BuildContext context) {
    _sleepLog.sort((a, b) =>
        a.date.compareTo(b.date)); // ensure entries are in chronological order

    // filter entries to get the past week
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
            primaryXAxis: DateTimeAxis(),
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
                  FilteringTextInputFormatter.digitsOnly
                ],
                decoration: InputDecoration(
                  labelText: 'Hours of sleep',
                ),
              )),
          SizedBox(
            height: 30,
          ),
          ElevatedButton(
            child: Text('Log sleep'),
            onPressed: _addSleepEntry,
          ),
        ],
      ),
    );
  }
}
