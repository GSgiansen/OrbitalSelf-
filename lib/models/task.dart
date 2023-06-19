class Task {
  final String id;
  final String title;
  final String description;
  final String category;
  bool isDone;

  Task(
      {required this.id,
      required this.title,
      required this.description,
      required this.category,
      required this.isDone});

  factory Task.fromJson(Map<String, dynamic> json) {
    return Task(
      id: json['id'],
      title: json['title'],
      description: json['description'],
      category: json['category'],
      isDone: json['isDone'],
    );
  }

  Map<String, dynamic> toJson() {
    return {
      'id': id,
      'title': title,
      'description': description,
      'category': category,
      'isDone': isDone,
    };
  }
}
