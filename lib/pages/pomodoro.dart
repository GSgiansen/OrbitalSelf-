import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:flutter/material.dart';
import 'dart:async';
import 'package:orbital_test_space/pages/settings.dart';
import 'package:animated_text_kit/animated_text_kit.dart';
import 'package:firebase_auth/firebase_auth.dart';

class PomodoroTimerPage extends StatefulWidget {
  @override
  _PomodoroTimerPageState createState() => _PomodoroTimerPageState();
}

class _PomodoroTimerPageState extends State<PomodoroTimerPage> {
  Timer _timer = Timer(Duration.zero, () {});
  int _startWorkTime = 25 * 60; // 25 minutes to seconds
  int _startRestTime = 5 * 60; // 5 minutes to seconds
  int _numSessions = 3;
  int _currentSession = 0;
  int _current = 25 * 60;
  bool _isResting = false;
  bool _isRunning = false;
  bool _isPaused = false;
  bool _isPomodoroCompleted = false;
  bool _isReset = true;
  int _totalPomodoros = 0;
  StreamSubscription<DocumentSnapshot>? _pomodoroCountSubscription;

  Future<void> _fetchTotalPomodoros() async {
    User? user = FirebaseAuth.instance.currentUser;
    if (user != null) {
      DocumentReference userDoc =
          FirebaseFirestore.instance.collection('users').doc(user.email);
      _pomodoroCountSubscription = userDoc.snapshots().listen((snapshot) {
        if (snapshot.exists) {
          Map<String, dynamic>? data = snapshot.data() as Map<String, dynamic>?;
          if (data != null && data.containsKey('Pomodoro')) {
            setState(() {
              _totalPomodoros = data['Pomodoro'] ?? 0;
            });
          }
        }
      });
    }
  }

  @override
  void initState() {
    super.initState();
    _fetchTotalPomodoros();
  }

  @override
  void dispose() {
    _pomodoroCountSubscription?.cancel();
    super.dispose();
  }

  Future<void> _updatePomodoroCount() async {
    User? user = FirebaseAuth.instance.currentUser;
    if (user != null) {
      DocumentReference userDoc =
          FirebaseFirestore.instance.collection('users').doc(user.email);

      await userDoc
          .set({'Pomodoro': FieldValue.increment(1)}, SetOptions(merge: true));
    }
  }

  void startTimer() {
    _isRunning = true;
    _isPomodoroCompleted = false;
    _timer = Timer.periodic(
      Duration(seconds: 1),
      (Timer timer) {
        if (_current == 0) {
          setState(() {
            timer.cancel();
            _isRunning = false;
            if (_isResting) {
              // If resting, start next work session or stop if no more sessions
              _isResting = false;
              _currentSession++;
              _updatePomodoroCount();
              if (_currentSession >= _numSessions) {
                _currentSession = 0;
                _isPomodoroCompleted = true; // Reset sessions
                _isReset = false;
              } else {
                _current = _startWorkTime;
                startTimer();
              }
            } else {
              // If working, start rest
              _isResting = true;
              _current = _startRestTime;
              startTimer();
            }
          });
        } else {
          setState(() {
            _current--;
          });
        }
      },
    );
  }

  void pauseTimer() {
    _timer.cancel();
    setState(() {
      _isPaused = true;
    });
  }

  void resumeTimer() {
    setState(() {
      _isPaused = false;
    });
    startTimer();
  }

  void resetTimer() {
    _timer.cancel();
    _isRunning = false;
    _isPaused = false;
    _isReset = true;
    setState(() {
      _isPomodoroCompleted = false;
      _current = _startWorkTime;
      _currentSession = 0;
      _isResting = false;
    });
  }

  Future<bool?> _showConfirmationDialog() async {
    return showDialog<bool>(
      context: context,
      builder: (BuildContext context) {
        return AlertDialog(
          title: Text('Confirmation'),
          content: Text(
              'Are you sure you want to leave? This will stop the current pomodoro session.'),
          actions: <Widget>[
            TextButton(
              child: Text('Cancel'),
              onPressed: () {
                Navigator.of(context)
                    .pop(false); // Return false to indicate cancellation
              },
            ),
            TextButton(
              child: Text('Leave'),
              onPressed: () {
                Navigator.of(context)
                    .pop(true); // Return true to indicate confirmation
              },
            ),
          ],
        );
      },
    );
  }

  @override
  Widget build(BuildContext context) {
    return WillPopScope(
      onWillPop: () async {
        bool leaveConfirmed = await _showConfirmationDialog() ?? false;
        return leaveConfirmed; // Return the confirmation result
      },
      child: Scaffold(
        appBar: AppBar(
          title: Text('Pomodoro Timer'),
          leading: IconButton(
            icon: Icon(Icons.chevron_left),
            onPressed: () async {
              bool leaveConfirmed = await _showConfirmationDialog() ?? false;
              if (leaveConfirmed) {
                resetTimer(); // Cancel the timer and reset the state
                Navigator.pop(context);
              }
            },
          ),
        ),
        body: Container(
          decoration: BoxDecoration(
            image: DecorationImage(
              image: AssetImage('web/timerbackground.png'),
              fit: BoxFit.cover,
            ),
          ),
          child: Center(
            child: Column(
              mainAxisAlignment: MainAxisAlignment.center,
              children: [
                _isPomodoroCompleted
                    ? Text(
                        "Completed Pomodoro!",
                        style: TextStyle(fontSize: 24, color: Colors.black),
                      )
                    : DefaultTextStyle(
                        style: TextStyle(
                            fontSize: 24,
                            color: Colors.black,
                            fontFamily: 'Rotorcap'),
                        child: _isRunning
                            ? AnimatedTextKit(
                                animatedTexts: [
                                  WavyAnimatedText(
                                      "${_isResting ? "Resting" : "Working"}: ${_currentSession + 1}/$_numSessions")
                                ],
                                repeatForever: true,
                              )
                            : Text(
                                "${_isResting ? "Resting" : "Working"}: ${_currentSession + 1}/$_numSessions")),
                Transform.scale(
                    scale: 8,
                    child: CircularProgressIndicator(
                      value: _current /
                          (_isResting ? _startRestTime : _startWorkTime),
                      valueColor: AlwaysStoppedAnimation<Color>(Colors.green),
                    )),
                Text(
                  '${_current ~/ 60}:${(_current % 60).toString().padLeft(2, '0')}',
                  style: TextStyle(fontSize: 60),
                ),
                SizedBox(height: 130),
                Row(
                  mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                  children: [
                    FloatingActionButton(
                      heroTag: "play",
                      child: Icon(_isRunning && !_isPaused
                          ? Icons.pause
                          : Icons.play_arrow),
                      backgroundColor: Colors.green,
                      onPressed: () {
                        if (_isRunning) {
                          if (_isPaused) {
                            resumeTimer();
                          } else {
                            pauseTimer();
                          }
                        } else {
                          startTimer();
                        }
                      },
                    ),
                    FloatingActionButton(
                      heroTag: "refresh",
                      backgroundColor: Colors.green,
                      child: Icon(Icons.refresh),
                      onPressed: resetTimer,
                    ),
                    FloatingActionButton(
                      heroTag: "settings", //button to go to settings page
                      backgroundColor: Colors.green,
                      child: Icon(Icons.settings),
                      onPressed: () {
                        resetTimer(); // Cancel the timer and reset the state
                        Navigator.of(context).push(
                          MaterialPageRoute(
                            builder: (context) => SettingsPage(
                              workTime: _startWorkTime ~/ 60,
                              restTime: _startRestTime ~/ 60,
                              numSessions: _numSessions,
                              onSave: (workTime, restTime, numSessions) {
                                setState(() {
                                  _startWorkTime = workTime * 60;
                                  _startRestTime = restTime * 60;
                                  _numSessions = numSessions;
                                  _current = _startWorkTime;
                                  _currentSession = 0;
                                  _isResting = false;
                                });
                              },
                            ),
                          ),
                        );
                      },
                    ),
                  ],
                ),
                SizedBox(
                  height: 20,
                ),
                Text(
                  "Today's Completed Pomodoros: $_totalPomodoros",
                  style: TextStyle(fontSize: 18, color: Colors.black),
                )
              ],
            ),
          ),
        ),
      ),
    );
  }
}
