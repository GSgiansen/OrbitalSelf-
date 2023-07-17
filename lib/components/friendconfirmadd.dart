import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:orbital_test_space/controllers/firebaseFriendFunctions.dart';

import '../pages/friends.dart';

void showConfirmationDialog(BuildContext context, String friendId, String friendEmail, Function callback) async {
  User? user = FirebaseAuth.instance.currentUser;
  String userID = '';
  DocumentSnapshot userSnapshot = await FirebaseFirestore.instance
          .collection('users')
          .doc(user?.email)
          .get();
  
  if (userSnapshot.exists) {
      Map<String, dynamic>? userData =
            userSnapshot.data() as Map<String, dynamic>?;
      if (userData != null) {
        if (userData["id"] != null) {
          print(userData["id"]);
          userID = userData["id"];
          }
        }
      }
  if (friendId == userID) {

    CannotAddUser(friendId, context);
    return;
  }
  else {
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

}


void CannotAddUser(String friendId, BuildContext context) {
  showDialog(
    context: context,
    builder: (BuildContext context) {
      return AlertDialog(
        title: Text('Cannot Add Friend'),
        content: Text('You cannot add $friendId as your friend.'),
        actions: [
          TextButton(
            onPressed: () {
              Navigator.of(context).pop();
            },
            child: Text('OK'),
          ),
        ],
      );
    },
  );
}