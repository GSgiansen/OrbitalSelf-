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

  factory Task.fromJson(Map<String, dynamic> json) {
    return Task(
      id: json['id'],
      title: json['title'],
      description: json['description'],
      category: json['category'],
      dateTime: json['datetime'] != null
          ? DateTime.parse(json['datetime'])
          : DateTime.now(), // Provide a default value if it's null
      isDone: json['isDone'],
    );
  }

  Map<String, dynamic> toJson() {
    return {
      'id': id,
      'title': title,
      'description': description,
      'category': category,
      'datetime': dateTime.toString(),
      'isDone': isDone,
    };
  }
}
