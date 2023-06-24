import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import 'package:orbital_test_space/pages/taskprovider.dart';

class NewTaskPage extends StatefulWidget {
  @override
  _NewTaskPageState createState() => _NewTaskPageState();
}

class _NewTaskPageState extends State<NewTaskPage> {
  final titleController = TextEditingController();
  final descriptionController = TextEditingController();
  final List<String> categories = [
    'School',
    'Work',
    'Leisure',
    'Personal',
    'Others',
  ];
  String dropdownValue = 'School';

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('Add New Task'),
      ),
      body: Padding(
        padding: const EdgeInsets.all(16.0),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            Text('Title:'),
            TextField(
              controller: titleController,
            ),
            SizedBox(height: 20),
            Text('Description:'),
            TextField(
              controller: descriptionController,
            ),
            SizedBox(height: 20),
            Text('Category:'),
            DropdownButton<String>(
              value: dropdownValue,
              items: categories.map<DropdownMenuItem<String>>((String value) {
                return DropdownMenuItem<String>(
                  value: value,
                  child: Text(value),
                );
              }).toList(),
              onChanged: (String? newValue) {
                if (newValue != null) {
                  setState(() {
                    dropdownValue = newValue;
                  });
                }
              },
            ),
            Center(
              // Wrap the button with Center widget
              child: ElevatedButton(
                onPressed: () {
                  if (titleController.text.isNotEmpty) {
                    Provider.of<TaskProvider>(context, listen: false).addTask(
                      titleController.text,
                      descriptionController.text,
                      dropdownValue,
                      DateTime.now(),
                    );
                    Navigator.pop(context);
                  } else {
                    ScaffoldMessenger.of(context).showSnackBar(
                      SnackBar(
                        content: Text('Please enter a title for the task.'),
                      ),
                    );
                  }
                },
                child: Text('Add Task'),
              ),
            ),
          ],
        ),
      ),
    );
  }
}
