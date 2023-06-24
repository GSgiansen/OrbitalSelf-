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
  String selectedCategory = 'All';
  DateTime? selectedDate;

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
        actions: [
          IconButton(
            icon: Icon(Icons.filter_list),
            onPressed: () {
              showFilterOptions(context);
            },
          ),
        ],
      ),
      body: Consumer<TaskProvider>(
        builder: (context, taskData, child) {
          List<Task> filteredTasks = filterTasks(taskData.tasks);

          return ListView.builder(
            itemCount: filteredTasks.length,
            itemBuilder: (context, index) {
              final task = filteredTasks[index];
              final previousTask = index > 0 ? filteredTasks[index - 1] : null;
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

  void showFilterOptions(BuildContext context) async {
    String newSelectedCategory = selectedCategory;
    DateTime? newSelectedDate = selectedDate;

    final result = await showDialog<bool>(
      context: context,
      builder: (BuildContext dialogContext) {
        return StatefulBuilder(
          builder: (BuildContext context, StateSetter setState) {
            return AlertDialog(
              title: Text('Filter Options'),
              content: Column(
                mainAxisSize: MainAxisSize.min,
                children: [
                  ListTile(
                    title: Text('All'),
                    leading: Radio(
                      value: 'All',
                      groupValue: newSelectedCategory,
                      onChanged: (value) {
                        setState(() {
                          newSelectedCategory = value.toString();
                        });
                      },
                    ),
                  ),
                  ListTile(
                    title: Text('School'),
                    leading: Radio(
                      value: 'School',
                      groupValue: newSelectedCategory,
                      onChanged: (value) {
                        setState(() {
                          newSelectedCategory = value.toString();
                        });
                      },
                    ),
                  ),
                  ListTile(
                    title: Text('Work'),
                    leading: Radio(
                      value: 'Work',
                      groupValue: newSelectedCategory,
                      onChanged: (value) {
                        setState(() {
                          newSelectedCategory = value.toString();
                        });
                      },
                    ),
                  ),
                  ListTile(
                    title: Text('Leisure'),
                    leading: Radio(
                      value: 'Leisure',
                      groupValue: newSelectedCategory,
                      onChanged: (value) {
                        setState(() {
                          newSelectedCategory = value.toString();
                        });
                      },
                    ),
                  ),
                  ListTile(
                    title: Text('Personal'),
                    leading: Radio(
                      value: 'Personal',
                      groupValue: newSelectedCategory,
                      onChanged: (value) {
                        setState(() {
                          newSelectedCategory = value.toString();
                        });
                      },
                    ),
                  ),
                  ListTile(
                    title: Text('Others'),
                    leading: Radio(
                      value: 'Others',
                      groupValue: newSelectedCategory,
                      onChanged: (value) {
                        setState(() {
                          newSelectedCategory = value.toString();
                        });
                      },
                    ),
                  ),
                ],
              ),
              actions: [
                TextButton(
                  onPressed: () {
                    setState(() {
                      newSelectedCategory = 'All';
                      newSelectedDate = null;
                    });
                    Navigator.pop(dialogContext, false);
                  },
                  child: Text('Clear Filters'),
                ),
                ElevatedButton(
                  onPressed: () {
                    Navigator.pop(dialogContext, true);
                  },
                  child: Text('Apply'),
                ),
              ],
            );
          },
        );
      },
    );

    if (result != null && result) {
      setState(() {
        selectedCategory = newSelectedCategory;
        selectedDate = newSelectedDate;
      });
    }
  }

  List<Task> filterTasks(List<Task> tasks) {
    if (selectedCategory == 'All' && selectedDate == null) {
      return tasks;
    }

    List<Task> filteredTasks = tasks;

    if (selectedCategory != 'All') {
      filteredTasks = filteredTasks
          .where((task) => task.category == selectedCategory)
          .toList();
    }

    return filteredTasks;
  }
}

class TaskListItem extends StatelessWidget {
  final Task task;

  TaskListItem({required this.task});

  @override
  Widget build(BuildContext context) {
    IconData categoryIcon;
    Color categoryColor;

    switch (task.category) {
      case 'School':
        categoryIcon = Icons.school;
        categoryColor = Colors.blue;
        break;
      case 'Work':
        categoryIcon = Icons.work;
        categoryColor = Colors.purple;
        break;
      case 'Leisure':
        categoryIcon = Icons.beach_access;
        categoryColor = Colors.orange;
        break;
      case 'Personal':
        categoryIcon = Icons.person;
        categoryColor = Colors.green;
        break;
      case 'Others':
        categoryIcon = Icons.circle;
        categoryColor = Colors.grey;
        break;
      default:
        categoryIcon = Icons.circle;
        categoryColor = Colors.grey;
        break;
    }

    return ListTile(
      leading: Checkbox(
        onChanged: (bool? value) {
          Provider.of<TaskProvider>(context, listen: false).toggleDone(task);
        },
        value: task.isDone,
      ),
      title: Row(
        children: [
          Icon(
            categoryIcon,
            color: categoryColor,
          ),
          SizedBox(width: 8.0),
          Expanded(
            child: Text(
              task.title,
              style: task.isDone
                  ? TextStyle(
                      decoration: TextDecoration.lineThrough,
                      color: Colors.black,
                    )
                  : null,
            ),
          ),
        ],
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
      trailing: IconButton(
        icon: Icon(Icons.delete),
        onPressed: () {
          Provider.of<TaskProvider>(context, listen: false).deleteTask(task);
        },
      ),
    );
  }
}
