import 'package:flutter/material.dart';
import 'package:shared_preferences/shared_preferences.dart';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';

class WaterIntakeApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
          appBar: AppBar(
            title: Text(
              'Water Intake Tracker',
              style: TextStyle(fontFamily: 'Rotorcap'),
            ),
            leading: IconButton(
              icon: Icon(Icons.chevron_left),
              onPressed: () {
                Navigator.pop(context);
              },
            ),
          ),
          body: Theme(
            data: ThemeData(fontFamily: "Rotorcap"),
            child: WaterIntakePage(),
          )),
    );
  }
}

class WaterIntakePage extends StatefulWidget {
  @override
  _WaterIntakePageState createState() => _WaterIntakePageState();
}

class _WaterIntakePageState extends State<WaterIntakePage> {
  int _selectedGlasses = 1;
  double _currentIntake = 0.0;
  final double _dailyRequirement =
      2000.0; // Assume daily requirement is 2000 ml
  final TextEditingController _textController = TextEditingController();
  bool _showCongratsText = false;

  @override
  void initState() {
    super.initState();
    loadIntake();
  }

  @override
  void dispose() {
    _textController.dispose();
    super.dispose();
  }

  loadIntake() async {
    User? user = FirebaseAuth.instance.currentUser;
    if (user != null) {
      DocumentSnapshot userSnapshot = await FirebaseFirestore.instance
          .collection('users')
          .doc(user.email)
          .get();

      if (userSnapshot.exists) {
        Map<String, dynamic>? userData =
            userSnapshot.data() as Map<String, dynamic>?;
        setState(() {
          _currentIntake = (userData?['Water'] ?? 0.0).toDouble();
          if (_currentIntake >= _dailyRequirement) {
            _showCongratsText = true;
          }
        });
      }
    }
  }

  updateIntake(double intake) async {
    User? user = FirebaseAuth.instance.currentUser;
    if (user != null) {
      FirebaseFirestore.instance
          .collection('users')
          .doc(user.email)
          .update({'Water': intake});
    }

    setState(() {
      _currentIntake = intake;
      if (_currentIntake >= _dailyRequirement) {
        _showCongratsText = true;
      }
    });
  }

  resetIntake() async {
    User? user = FirebaseAuth.instance.currentUser;
    if (user != null) {
      FirebaseFirestore.instance
          .collection('users')
          .doc(user.email)
          .update({'Water': 0.0});
    }

    setState(() {
      _currentIntake = 0.0;
      _showCongratsText = false;
    });
  }

  Widget buildFaceIcon() {
    final double percentage = _currentIntake / _dailyRequirement;

    if (percentage <= 0.3) {
      return Icon(Icons.sentiment_very_dissatisfied,
          size: 80, color: Colors.red);
    } else if (percentage <= 0.6) {
      return Icon(Icons.sentiment_neutral, size: 80, color: Colors.orange);
    } else {
      return Icon(Icons.sentiment_very_satisfied,
          size: 80, color: Colors.green);
    }
  }

  Widget buildDropdownForm() {
    return Column(
      children: [
        Row(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Text('I just drank',
                style: TextStyle(fontSize: 14, fontFamily: "Rotorcap")),
            SizedBox(width: 10),
            DropdownButton<int>(
              value: _selectedGlasses,
              items: List.generate(5, (index) {
                int glasses = index + 1;
                return DropdownMenuItem<int>(
                  value: glasses,
                  child: Text(
                    '$glasses glass${glasses > 1 ? 'es' : ''}',
                    style: TextStyle(fontFamily: "Rotorcap"),
                  ),
                );
              }),
              onChanged: (value) {
                setState(() {
                  _selectedGlasses = value!;
                });
              },
            ),
            SizedBox(width: 10),
            Text('of water.',
                style: TextStyle(fontSize: 14, fontFamily: "Rotorcap")),
            SizedBox(width: 10),
            ElevatedButton(
              onPressed: () {
                setState(() {
                  final intake = _selectedGlasses * 100.0;
                  updateIntake(_currentIntake + intake);
                });
              },
              child: Text('Log It!',
                  style: TextStyle(fontSize: 14, fontFamily: "Rotorcap")),
            ),
          ],
        ),
        SizedBox(height: 10),
        Text(
          'A glass of water is approximately 100ml',
          style: TextStyle(fontSize: 12, fontFamily: "Rotorcap"),
        ),
      ],
    );
  }

  @override
  Widget build(BuildContext context) {
    return Center(
      child: Column(
        mainAxisAlignment: MainAxisAlignment.center,
        children: <Widget>[
          if (_showCongratsText)
            Text(
              "You're a certified hydrohomie!",
              style: TextStyle(fontSize: 24, fontFamily: "Rotorcap"),
            ),
          SizedBox(height: 20),
          Text('Daily Water Intake',
              style: TextStyle(fontSize: 24, fontFamily: "Rotorcap")),
          SizedBox(height: 50),
          Stack(
            alignment: Alignment.center,
            children: <Widget>[
              SizedBox(
                width: 300,
                height: 300,
                child: CircularProgressIndicator(
                  value: _currentIntake / _dailyRequirement,
                  strokeWidth: 20,
                  valueColor: AlwaysStoppedAnimation<Color>(Colors.blue),
                ),
              ),
              Column(
                mainAxisAlignment: MainAxisAlignment.center,
                children: <Widget>[
                  buildFaceIcon(),
                  SizedBox(height: 10),
                  Text(
                    '${(_currentIntake / _dailyRequirement * 100).toStringAsFixed(0)}%',
                    style: TextStyle(fontSize: 24, fontFamily: "Rotorcap"),
                  ),
                  SizedBox(height: 10),
                  Text(
                    '${_currentIntake.toStringAsFixed(1)} / $_dailyRequirement ml',
                    style: TextStyle(fontSize: 16, fontFamily: "Rotorcap"),
                  ),
                ],
              ),
            ],
          ),
          SizedBox(height: 30),
          buildDropdownForm(),
        ],
      ),
    );
  }
}
