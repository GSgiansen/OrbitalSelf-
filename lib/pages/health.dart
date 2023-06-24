import 'package:animated_text_kit/animated_text_kit.dart';
import 'package:flutter/material.dart';
import 'package:orbital_test_space/pages/pomodoro.dart';
import 'package:orbital_test_space/pages/sleep.dart';
import 'package:orbital_test_space/pages/todo.dart';
import 'package:orbital_test_space/pages/water.dart';
import 'package:getwidget/getwidget.dart';

class MyHealthPage extends StatelessWidget {
  const MyHealthPage({Key? key}) : super(key: key);

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
              //_buildProgress('Sleep', 0.5),
              Column(
                crossAxisAlignment: CrossAxisAlignment.start,
                children: [
                  Text('Sleep'),
                  GFProgressBar(
                    percentage: 0.5,
                    lineHeight: 20,
                    alignment: MainAxisAlignment.spaceBetween,
                    child: const Text('50%',
                        textAlign: TextAlign.end,
                        style: TextStyle(fontSize: 16, color: Colors.black)),
                    backgroundColor: Colors.greenAccent,
                    progressBarColor: Colors.green,
                  ),
                ],
              ),
              SizedBox(height: 16),
              _buildProgress('Water', 0.5),
              SizedBox(height: 16),
              _buildProgress('Productivity', 0.5),
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
                                  builder: (context) => PomodoroTimerPage()));
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
                                  builder: (context) => SleepLoggingPage()));
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
                                  builder: (context) => WaterIntakeApp()));
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
                                  builder: (context) => ToDoPage()));
                        },
                      ),
                    ],
                  ),
                ],
              ),
              SizedBox(height: 60),
              Padding(
                  padding: EdgeInsets.only(left: 150),
                  child: Container(
                      height: 30,
                      width: 200,
                      child: AnimatedTextKit(
                        repeatForever: true,
                        animatedTexts: [
                          TypewriterAnimatedText(
                              "Today's goal: Complete 3 pomodoro sessions."),
                        ],
                      )))
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
        child: Text(title, style: TextStyle(fontSize: 20, color: Colors.white)),
      ),
    );
  }

  Widget _buildProgress(String label, double progress) {
    return Column(
      crossAxisAlignment: CrossAxisAlignment.start,
      children: <Widget>[
        Text(label),
        GFProgressBar(
          percentage: 0.5,
          lineHeight: 20,
          alignment: MainAxisAlignment.spaceBetween,
          child: const Text('50%',
              textAlign: TextAlign.end,
              style: TextStyle(fontSize: 16, color: Colors.black)),
          backgroundColor: Colors.greenAccent,
          progressBarColor: Colors.green,
        )
      ],
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
