import 'package:flutter/material.dart';
import 'package:orbital_test_space/models/SleepEntry.dart';
import 'package:flutter_charts/flutter_charts.dart';
import 'package:intl/intl.dart';

class SleepLoggingPage extends StatefulWidget {
  @override
  _SleepLoggingPageState createState() => _SleepLoggingPageState();
}

class _SleepLoggingPageState extends State<SleepLoggingPage> {
  final List<SleepEntry> _sleepLog = [];
  final TextEditingController _textController = TextEditingController();

  void _addSleepEntry() {
    setState(() {
      _sleepLog.add(SleepEntry(
        date: DateTime.now(),
        hoursOfSleep: double.parse(_textController.text),
      ));
    });
    _textController.clear();
  }

  @override
  Widget build(BuildContext context) {
    _sleepLog.sort((a, b) =>
        a.date.compareTo(b.date)); // ensure entries are in chronological order

    // filter entries to get the past week
    final weekAgo = DateTime.now().subtract(Duration(days: 7));
    final pastWeekEntries =
        _sleepLog.where((entry) => entry.date.isAfter(weekAgo)).toList();

    // convert the entries to chart data
    final chartData = pastWeekEntries.map((entry) => FlutterChartData(
          xAxis: DateFormat('yyyy-MM-dd').format(entry.date),
          yAxis: entry.hoursOfSleep,
        ));

    return Scaffold(
      appBar: AppBar(
        title: Text('Sleep Logging'),
      ),
      body: Column(
        children: <Widget>[
          TextField(
            controller: _textController,
            keyboardType: TextInputType.number,
            decoration: InputDecoration(
              labelText: 'Hours of sleep',
            ),
          ),
          ElevatedButton(
            child: Text('Log sleep'),
            onPressed: _addSleepEntry,
          ),
          FlutterCharts(
            data: chartData.toList(),
            chartStyle: FlutterChartsStyle(
              chartType: ChartType.bar,
            ),
          ),
        ],
      ),
    );
  }
}
