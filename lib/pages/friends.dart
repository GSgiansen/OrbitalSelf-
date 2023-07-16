import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:firebase_core/firebase_core.dart';
import 'package:flutter/material.dart';
import 'package:orbital_test_space/models/friend.dart';

import '../components/friendconfirmadd.dart';
import '../controllers/firebaseFriendFunctions.dart';

class MyFriendsPage extends StatefulWidget {
  const MyFriendsPage({Key? key, required this.user}) : super(key: key);
  final User? user;

  @override
  State<MyFriendsPage> createState() => _FriendsPageState();
}

class _FriendsPageState extends State<MyFriendsPage> {
  List<Map<String, dynamic>> _state_friends =
      []; //list of friends from firebase, obtained from the individual user
  final TextEditingController _friendIdController = TextEditingController();
  List<Friend> _state_friendList = []; // list of friends from friend collection

  // getfriends will quert firebase for friends list
  //

  //accepts a list of confirmed friend names, have to iterate across friends collection to get name
  getFriendNames(List<Map<String, dynamic>> friends) async {
    print("friends is now " + friends.toString());
    final CollectionReference collection =
        FirebaseFirestore.instance.collection('friends');
    final QuerySnapshot querySnapshot = await collection.get();
    List<Friend> friendL = [];
    for (Map<String, dynamic> friend in friends) {
      print(friend);
      for (var doc in querySnapshot.docs) {
        print(doc.id);
        if (doc.id == friend["friendID"]) {
          print("Friend ID: ${friend}");
          print("Friend Data: ${doc.data()}");

          friendL.add(Friend(
              id: friend["friendID"],
              name: friend["friendemail"],
              profileImage: 'assets/images/johncena.jpg',
              status: friend["status"]));
          break;
        }
      }
    }
    setState(() {
      print("setting state to " + friendL.toString());
      _state_friendList = friendL;
    });
  }

  getFriends() async {
    //gets the IDs associated with users from firebase
    User? user = FirebaseAuth.instance.currentUser;
    if (user != null) {
      DocumentSnapshot userSnapshot = await FirebaseFirestore.instance
          .collection('users')
          .doc(user.email)
          .get();

      //checking if the user has generated their ID
      if (userSnapshot.exists) {
        Map<String, dynamic>? userData =
            userSnapshot.data() as Map<String, dynamic>?;

        if (userData != null) {
          if (userData["id"] != null) {
            print(userData["id"]);
          } else {
            print("No id");
            String id = generateUserId();
            FirebaseFirestore.instance
                .collection('users')
                .doc(user.email)
                .update({'id': id});
            print("generated id is" + id);
            AddToFriendCollection(id);
          }

          if (userData["friends"] != null) {
            List<Map<String, dynamic>> userDataFriends =
                List<Map<String, dynamic>>.from(userData["friends"]);
            setState(() {
              _state_friends = userDataFriends;
            });
            // await getFriendNames(_state_friends);
          } else {
            print("No friends");
            List<Map<String, dynamic>> friends = [];
            FirebaseFirestore.instance
                .collection('users')
                .doc(user.email)
                .update({'friends': friends});
          }
        }
      }
    }
  }

  //check if input friendID exists in friends collection, and if do send a request to them
  Future<String> CheckAnotherUser(String friendID) async {
    final CollectionReference collection =
        FirebaseFirestore.instance.collection('friends');
    final QuerySnapshot querySnapshot = await collection.get();
    bool found = false;
    String friendemail = '';
    for (var doc in querySnapshot.docs) {
      if (doc.id == friendID) {
        Map<String, dynamic>? userData = doc.data() as Map<String, dynamic>?;
        setState(() {
          found = true;
          friendemail = userData!["email"];
        });
        break;
      }
    }

    if (found) {
      print("Friend exists");
      return friendemail;
    }
    return friendemail;
  }

  void checkUserAndPromptConfirmation(
      BuildContext context, String friendId) async {
    String userExists = await CheckAnotherUser(friendId);
    if (userExists != '') {
      showConfirmationDialog(context, friendId, userExists);
    } else {
      // Display user not found message or handle the case accordingly
      showDialog(
        context: context,
        builder: (BuildContext context) {
          return AlertDialog(
            title: Text('User Not Found'),
            content: Text('The user with ID $friendId does not exist.'),
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
  }

  @override
  void initState() {
    super.initState();
    waitForFirebase();
  }

  void waitForFirebase() async {
    await getFriends();
    await getFriendNames(_state_friends);
  }

  @override
  Widget build(BuildContext context) {
    return Column(
      children: [
        Padding(
          padding: EdgeInsets.all(8.0),
          child: Column(
            children: [
              TextField(
                controller: _friendIdController,
                decoration: InputDecoration(
                  labelText: 'Friend ID',
                ),
              ),
              SizedBox(height: 16.0),
              ElevatedButton(
                onPressed: () {
                  checkUserAndPromptConfirmation(
                      context, _friendIdController.text);
                  // CheckAnotherUser(_friendIdController.text);
                },
                child: Text('Add Friend'),
              ),
            ],
          ),
        ),
        SizedBox(height: 16.0),
        if (_state_friendList.isEmpty)
          Text('You have no friends yet.')
        else
          Expanded(
          child: ListView.builder(
            itemCount: _state_friendList.length,
            itemBuilder: (context, index) {
              print(_state_friendList[index]);
              return ListTile(
                title: Text(_state_friendList[index].id),
                subtitle: Text(_state_friendList[index].name),
                leading: CircleAvatar(
                  backgroundImage:
                      AssetImage(_state_friendList[index].profileImage),
                ),
                trailing: Text(_state_friendList[index].status),
              );
            },
          ),
        ),
      ],
    );
  }
}

