
import 'dart:math';

class Friend {
  final String id;
  final String name;
  final String profileImage;
  final String status;

  Friend({
    required this.id,
    required this.name,
    required this.profileImage,
    required this.status,
  });
}

String generateUserId() {
  final random = Random();
  const int codeLength = 10;
  const String charset = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789';
  
  String code = '';
  for (int i = 0; i < codeLength; i++) {
    code += charset[random.nextInt(charset.length)];
  }
  return code;
}



// Friend newFriend = Friend(
//   id: generateUserId(),
//   name: 'John Doe',
//   profileImage: 'assets/images/profile1.png',
//   status: 'Online',
// );
