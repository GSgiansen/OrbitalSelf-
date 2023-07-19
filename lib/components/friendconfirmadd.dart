import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:orbital_test_space/controllers/firebaseFriendFunctions.dart';

import '../pages/friends.dart';


//Edge cases are if friends are alr in friendslist collection for user,


void showConfirmationDialog(BuildContext context, String friendId, String friendEmail, Function callback) async {
  User? user = FirebaseAuth.instance.currentUser;
  String userID = '';
  List<Map<String, dynamic>> userFriends = [];
  DocumentSnapshot userSnapshot = await FirebaseFirestore.instance
          .collection('users')
          .doc(user?.email)
          .get();
  
  if (userSnapshot.exists) {
      Map<String, dynamic>? userData =
            userSnapshot.data() as Map<String, dynamic>?;
      if (userData != null) {
        print("user data is " + userData.toString());
        if (userData["id"] != null) {
          print(userData["id"]);
          userID = userData["id"];
        }
        print(userData["friends"]);
        if (userData["friends"] != null) {
          

          userFriends = List<Map<String, dynamic>>.from(userData["friends"]);
        }
      }
  }

  for (Map<String, dynamic> friend in userFriends) {
    if (friend["friendID"] == friendId && friend["status"] == 'confirmed') {
      FriendAlready(friendId, context);
      return;
    }
    if (friend["friendID"] == friendId && friend["status"] == 'pending') {
      FriendAlready(friendId, context);
      return;
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

void FriendAlready(String friendId, BuildContext context) {
  showDialog(
    context: context,
    builder: (BuildContext context) {
      return AlertDialog(
        title: Text('Cannot Add Friend'),
        content: Text('$friendId is already your friend.'),
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

void PendingFriend(String friendId, BuildContext context) {
  showDialog(
    context: context,
    builder: (BuildContext context) {
      return AlertDialog(
        title: Text('Cannot Add Friend'),
        content: Text('Frend request is awaiting.'),
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