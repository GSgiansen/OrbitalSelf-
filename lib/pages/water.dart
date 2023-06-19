import 'package:flutter/material.dart';
import 'package:shared_preferences/shared_preferences.dart';

class WaterIntakeApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: Text('Water Intake Tracker'),
        ),
        body: WaterIntakePage(),
      ),
    );
  }
}

class WaterIntakePage extends StatefulWidget {
  @override
  _WaterIntakePageState createState() => _WaterIntakePageState();
}

class _WaterIntakePageState extends State<WaterIntakePage> {
  double _currentIntake = 0.0;
  final double _dailyRequirement =
      2000.0; // Assume daily requirement is 2000 ml
  final TextEditingController _textController = TextEditingController();

  @override
  void initState() {
    super.initState();
    _loadIntake();
  }

  @override
  void dispose() {
    _textController.dispose();
    super.dispose();
  }

  _loadIntake() async {
    SharedPreferences prefs = await SharedPreferences.getInstance();
    setState(() {
      _currentIntake = (prefs.getDouble('intake') ?? 0.0);
    });
  }

  _updateIntake(double intake) async {
    SharedPreferences prefs = await SharedPreferences.getInstance();
    prefs.setDouble('intake', intake);
    _loadIntake();
  }

  @override
  Widget build(BuildContext context) {
    return Center(
      child: Column(
        mainAxisAlignment: MainAxisAlignment.center,
        children: <Widget>[
          Text('Daily Water Intake', style: TextStyle(fontSize: 24)),
          SizedBox(height: 50),
          CircularProgressIndicator(
            value: _currentIntake / _dailyRequirement,
            strokeWidth: 10,
            valueColor: AlwaysStoppedAnimation<Color>(Colors.blue),
          ),
          SizedBox(height: 50),
          Text('${_currentIntake.toStringAsFixed(1)} / $_dailyRequirement ml',
              style: TextStyle(fontSize: 24)),
          SizedBox(height: 30),
          Container(
            width: 150,
            child: TextField(
              controller: _textController,
              keyboardType: TextInputType.number,
              decoration: InputDecoration(
                labelText: 'Water intake (ml)',
              ),
            ),
          ),
          SizedBox(height: 30),
          ElevatedButton(
            onPressed: () {
              setState(() {
                final intake = double.parse(_textController.text);
                if (_currentIntake + intake <= _dailyRequirement) {
                  _updateIntake(_currentIntake + intake);
                }
              });
              _textController.clear();
            },
            child: Text('Log Water Intake', style: TextStyle(fontSize: 20)),
          ),
        ],
      ),
    );
  }
}
