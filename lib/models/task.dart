class Task {
  final String id;
  final String title;
  final String description;
  final String category;
  final DateTime dateTime;
  bool isDone;

  Task({
    required this.id,
    required this.title,
    required this.description,
    required this.category,
    required this.dateTime,
    required this.isDone,
  });

  // Convert Task to Map
  Map<String, dynamic> toMap() {
    return {
      'id': id,
      'title': title,
      'description': description,
      'category': category,
      'dateTime': dateTime.toIso8601String(),
      'isDone': isDone,
    };
  }

  // Create Task from Map
  factory Task.fromMap(Map<String, dynamic> map) {
    return Task(
      id: map['id'],
      title: map['title'],
      description: map['description'],
      category: map['category'],
      dateTime: DateTime.parse(map['dateTime']),
      isDone: map['isDone'],
    );
  }
}
