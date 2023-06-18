import 'package:flutter/material.dart';
import 'package:orbital_test_space/pages/pomodoro.dart';
import 'package:orbital_test_space/pages/sleep.dart';
import 'package:orbital_test_space/pages/water.dart';

class MyHealthPage extends StatelessWidget {
  const MyHealthPage({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: GridView.count(
        crossAxisCount: 2,
        padding: const EdgeInsets.all(16.0),
        childAspectRatio: 8.0 / 9.0,
        mainAxisSpacing: 16.0,
        crossAxisSpacing: 16.0,
        children: <Widget>[
          _HealthCard(
            title: 'Pomodoro',
            icon: Icons.alarm,
            color: Colors.orangeAccent,
            onPressed: () {
              Navigator.push(context,
                  MaterialPageRoute(builder: (context) => PomodoroTimerPage()));
            },
          ),
          _HealthCard(
            title: 'Sleep Log',
            icon: Icons.bedtime,
            color: Colors.purpleAccent,
            onPressed: () {
              Navigator.push(context,
                  MaterialPageRoute(builder: (context) => SleepLoggingPage()));
            },
          ),
          _HealthCard(
            title: 'Water Log',
            icon: Icons.local_drink,
            color: Colors.blueAccent,
            onPressed: () {
              Navigator.push(context,
                  MaterialPageRoute(builder: (context) => WaterIntakeApp()));
            },
          ),
          _HealthCard(
              title: 'To Do List',
              icon: Icons.calendar_month,
              color: Colors.green,
              onPressed: () {})
          // add more cards as needed
        ],
      ),
    );
  }
}

class _HealthCard extends StatelessWidget {
  final String title;
  final IconData icon;
  final Color color;
  final VoidCallback onPressed;

  const _HealthCard({
    required this.title,
    required this.icon,
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
                Icon(icon, size: 80, color: Colors.white),
                Text(
                  title,
                  style: Theme.of(context)
                      .textTheme
                      .headlineSmall
                      ?.copyWith(color: Colors.white),
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
