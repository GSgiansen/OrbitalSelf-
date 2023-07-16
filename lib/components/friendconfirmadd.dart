import 'package:flutter/material.dart';
import 'package:orbital_test_space/controllers/firebaseFriendFunctions.dart';

void showConfirmationDialog(BuildContext context, String friendId, String friendemail) {
  showDialog(
    context: context,
    builder: (BuildContext context) {
      return AlertDialog(
        title: Text('Confirm Friend Addition'),
        content: Text('Do you want to add $friendId ($friendemail) as your friend?'),
        actions: [
          TextButton(
            onPressed: () {
              // Handle friend addition
              AddAnotherUserAsFriend(friendId, friendemail);
              Navigator.of(context).pop();
            },
            child: Text('Add Friend'),
          ),
          TextButton(
            onPressed: () {
              Navigator.of(context).pop();
            },
            child: Text('Cancel'),
          ),
        ],
      );
    },
  );
}
