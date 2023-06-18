import 'package:flutter/material.dart';
import 'dart:async';
import 'package:orbital_test_space/pages/settings.dart';

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

  void startTimer() {
    _isRunning = true;
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
              if (_currentSession >= _numSessions) {
                _currentSession = 0; // Reset sessions
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
    _isRunning = false;
    _timer.cancel();
  }

  void resetTimer() {
    pauseTimer();
    setState(() {
      _current = _startWorkTime;
      _currentSession = 0;
      _isResting = false;
    });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('Pomodoro Timer'),
      ),
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            _currentSession >= _numSessions
                ? Text(
                    "Completed Pomodoro!",
                    style: TextStyle(fontSize: 24),
                  )
                : Text(
                    "${_isResting ? "Resting" : "Working"}: ${_currentSession + 1}/$_numSessions",
                    style: TextStyle(fontSize: 24),
                  ),
            CircularProgressIndicator(
              value: _current / (_isResting ? _startRestTime : _startWorkTime),
            ),
            Text(
              '$_current',
              style: TextStyle(fontSize: 60),
            ),
            Row(
              mainAxisAlignment: MainAxisAlignment.spaceEvenly,
              children: [
                FloatingActionButton(
                  heroTag: "play",
                  child: Icon(Icons.play_arrow),
                  onPressed: _isRunning ? null : startTimer,
                ),
                FloatingActionButton(
                  heroTag: "pause",
                  child: Icon(Icons.pause),
                  onPressed: _isRunning ? pauseTimer : null,
                ),
                FloatingActionButton(
                  heroTag: "refresh",
                  child: Icon(Icons.refresh),
                  onPressed: resetTimer,
                ),
                FloatingActionButton(
                  heroTag: "settings",
                  child: Icon(Icons.settings),
                  onPressed: () {
                    pauseTimer();
                    Navigator.of(context).push(
                      MaterialPageRoute(
                        builder: (context) => SettingsPage(
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
          ],
        ),
      ),
    );
  }
}
