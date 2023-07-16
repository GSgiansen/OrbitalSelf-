import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:orbital_test_space/controllers/firebaseFriendFunctions.dart';

import '../pages/friends.dart';

void showConfirmationDialog(BuildContext context, String friendId, String friendEmail, Function callback) {
  showDialog(
    context: context,
    builder: (BuildContext context) {
      return AlertDialog(
        title: Text('Confirm Friend Addition'),
        content: Text('Do you want to add $friendId ($friendEmail) as your friend?'),
        actions: [
          TextButton(
            onPressed: () async {
              // Handle friend addition
              await AddAnotherUserAsFriend(friendId, friendEmail);
              callback();
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
