import 'package:flutter/material.dart';
import 'package:orbital_test_space/pages/taskprovider.dart';
import 'package:orbital_test_space/models/task.dart';
import 'package:provider/provider.dart';
import 'package:orbital_test_space/pages/newtask.dart';

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
              return TaskListItem(task: taskData.tasks[index]);
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
