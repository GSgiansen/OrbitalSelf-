import 'package:fake_cloud_firestore/fake_cloud_firestore.dart';

Future<void> main() async {
  final instance = FakeFirebaseFirestore();
  String email = 'gs10@gmail.com';
  await instance.collection('users').add({
    'email': email,
    'id' : "12345678"

  });
  
  final snapshot = await instance.collection('users').get();
  print(snapshot.docs.length); // 1
  print(snapshot.docs.first.get('email')); // 'Bob'
  print(instance.dump());
}
