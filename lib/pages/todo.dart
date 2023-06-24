import 'package:flutter/material.dart';
import 'package:orbital_test_space/pages/taskprovider.dart';
import 'package:orbital_test_space/models/task.dart';
import 'package:provider/provider.dart';
import 'package:orbital_test_space/pages/newtask.dart';
import 'package:intl/intl.dart';

class ToDoPage extends StatefulWidget {
  @override
  _ToDoPageState createState() => _ToDoPageState();
}

class _ToDoPageState extends State<ToDoPage> {
  @override
  void initState() {
    Provider.of<TaskProvider>(context, listen: false).loadData();
    super.initState();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('ToDo List'),
      ),
      body: Consumer<TaskProvider>(
        builder: (context, taskData, child) {
          return ListView.builder(
            itemCount: taskData.tasks.length,
            itemBuilder: (context, index) {
              final task = taskData.tasks[index];
              final previousTask = index > 0 ? taskData.tasks[index - 1] : null;
              final showHeader = previousTask == null ||
                  !isSameDate(task.dateTime, previousTask.dateTime);
              return Column(
                crossAxisAlignment: CrossAxisAlignment.start,
                children: [
                  if (showHeader) buildDateHeader(task.dateTime),
                  TaskListItem(task: task),
                ],
              );
            },
          );
        },
      ),
      floatingActionButton: FloatingActionButton(
        onPressed: () {
          Navigator.push(
            context,
            MaterialPageRoute(builder: (context) => NewTaskPage()),
          );
        },
        child: Icon(Icons.add),
      ),
    );
  }

  Widget buildDateHeader(DateTime dateTime) {
    final DateFormat dateFormat = DateFormat('MM/dd/yyyy');
    final String formattedDate = dateFormat.format(dateTime);
    return Padding(
      padding: const EdgeInsets.symmetric(horizontal: 16.0, vertical: 8.0),
      child: Text(
        formattedDate,
        style: TextStyle(
          fontWeight: FontWeight.bold,
          fontSize: 16.0,
        ),
      ),
    );
  }

  bool isSameDate(DateTime dateTime1, DateTime dateTime2) {
    return dateTime1.year == dateTime2.year &&
        dateTime1.month == dateTime2.month &&
        dateTime1.day == dateTime2.day;
  }
}

class TaskListItem extends StatelessWidget {
  final Task task;

  TaskListItem({required this.task});

  @override
  Widget build(BuildContext context) {
    return ListTile(
      title: Text(
        task.title,
        style: task.isDone
            ? TextStyle(
                decoration: TextDecoration.lineThrough,
                color: Colors.grey,
              )
            : null,
      ),
      subtitle: Text(
        '${task.category} - ${task.description}',
        style: task.isDone
            ? TextStyle(
                decoration: TextDecoration.lineThrough,
                color: Colors.grey,
              )
            : null,
      ),
      leading: Checkbox(
        onChanged: (bool? value) {
          Provider.of<TaskProvider>(context, listen: false).toggleDone(task);
        },
        value: task.isDone,
      ),
      trailing: IconButton(
        icon: Icon(Icons.delete),
        onPressed: () {
          Provider.of<TaskProvider>(context, listen: false).deleteTask(task);
        },
      ),
    );
  }
}
