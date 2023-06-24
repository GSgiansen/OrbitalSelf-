class SleepEntry {
  final DateTime date;
  final double hoursOfSleep;

  SleepEntry({
    required this.date,
    required this.hoursOfSleep,
  });

  // Convert SleepEntry to Map
  Map<String, dynamic> toMap() {
    return {
      'date': date.toIso8601String(),
      'hoursOfSleep': hoursOfSleep,
    };
  }

  // Create SleepEntry from Map
  factory SleepEntry.fromMap(Map<String, dynamic> map) {
    return SleepEntry(
      date: DateTime.parse(map['date']),
      hoursOfSleep: map['hoursOfSleep'],
    );
  }
}
