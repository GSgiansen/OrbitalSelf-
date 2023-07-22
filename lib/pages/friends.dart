import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:firebase_core/firebase_core.dart';
import 'package:flutter/material.dart';
import 'package:orbital_test_space/models/friend.dart';
import 'package:orbital_test_space/pages/friendsislandview.dart';

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
  final route = MaterialPageRoute(
      builder: (context) => MyFriendsPage(
            user: FirebaseAuth.instance.currentUser,
          ));
  String? userID = '';

  getFriendNames(List<Map<String, dynamic>> friends) async {
    List<Friend> friendL = [];
    final CollectionReference collection =
        FirebaseFirestore.instance.collection('friends');

    collection.get().then((QuerySnapshot querySnapshot) {
      for (Map<String, dynamic> friend in friends) {
        // print(friend);
        for (var doc in querySnapshot.docs) {
          // print(doc.id);
          if (doc.id == friend["friendID"]) {
            print("Friend ID: ${friend}");
            print("Friend Data: ${doc.data()}");

            friendL.add(Friend(
              id: friend["friendID"],
              name: friend["friendemail"],
              profileImage: 'assets/images/cat.png',
              status: friend["status"],
              issued: friend["issued"],
            ));
            break;
          }
        }
      }

      setState(() {
        // print("setting state to " + friendL.toString());
        _state_friendList = friendL;
      });
      return friendL;
    });
    return [];
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
            // return userDataFriends;
            // await getFriendNames(_state_friends);
          } else {
            print("No friends");
            List<Map<String, dynamic>> friends = [];
            FirebaseFirestore.instance
                .collection('users')
                .doc(user.email)
                .update({'friends': friends});
            // return friends;
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
      // print("Friend exists");
      return friendemail;
    }
    return friendemail;
  }

  void checkUserAndPromptConfirmation(
      BuildContext context, String friendId, Function callback) async {
    String userExists = await CheckAnotherUser(
        friendId); //userexists is the email of the friend

    if (userExists != '') {
      showConfirmationDialog(context, friendId, userExists, callback);
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

  Future<String>? getUserID() async {
    User? user = FirebaseAuth.instance.currentUser;
    String userID = '';
    DocumentSnapshot userSnapshot = await FirebaseFirestore.instance
        .collection('users')
        .doc(user?.email)
        .get();

    if (userSnapshot.exists) {
      print("entered here");
      Map<String, dynamic>? userData =
          userSnapshot.data() as Map<String, dynamic>?;
      if (userData != null) {
        if (userData["id"] != null) {
          // print("USER DATA IS " + userData["id"]);
          userID = userData["id"];
          setState(() {
            userID = userData["id"];
          });
        }
      }
    }
    return userID;
  }

  @override
  void initState() {
    super.initState();
    waitForFirebase();
  }

  void waitForFirebase() async {
    await getFriends();
    await getFriendNames(_state_friends);
    String? id = await getUserID(); // Await the getUserID call
    setState(() {
      userID = id; // Assign the returned value to the userID variable
    });
  }

  void setStateInAnotherFile() async {
    setState(() {
      _state_friends = getFriends();
      getFriendNames(_state_friends);
      getUserID();
      // _state_friendList = [];
    });
  }

  ScrollController _scrollController = ScrollController();
  ScrollController _scrollControllerPending = ScrollController();

  @override
  Widget build(BuildContext context) {
    return Scaffold(
        body: SingleChildScrollView(
      child: Column(children: [
        Padding(
          padding: EdgeInsets.all(8.0),
          child: Column(
            children: [
              if (userID != null)
                Text("Your code is : " + userID.toString(),
                    style: const TextStyle(
                      fontWeight: FontWeight.bold,
                      fontSize: 16,
                      // Add other text style properties as needed
                    ))
              else
                Text("Loading..."),
              Padding(
                  padding: const EdgeInsets.all(8.0),
                  child: TextField(
                    controller: _friendIdController,
                    decoration: const InputDecoration(
                      labelText: 'Friend ID',
                    ),
                  )),
              SizedBox(height: 16.0),
              ElevatedButton(
                onPressed: () {
                  checkUserAndPromptConfirmation(
                      context, _friendIdController.text, setStateInAnotherFile);
                  setState(() {
                    _friendIdController.clear();
                  });
                  // CheckAnotherUser(_friendIdController.text);
                },
                child: const Text('Add Friend'),
              ),
            ],
          ),
        ),
        SizedBox(height: 16.0),
        if (_state_friendList.isEmpty)
          Text('You have no friends yet.')
        else
          SizedBox(
            width: 1000,
            height: 300,
            child: ListView.builder(
              shrinkWrap: true,
              itemCount: _state_friendList.length,
              itemBuilder: (context, index) {
                if (_state_friendList[index].status == "pending" &&
                    _state_friendList[index].issued) {
                  return ListTile(
                    title: Text(_state_friendList[index].id),
                    subtitle: Text(_state_friendList[index].name),
                    leading: CircleAvatar(
                      backgroundImage:
                          AssetImage(_state_friendList[index].profileImage),
                    ),
                    trailing: OutlinedButton(
                      onPressed: () async {
                        await AcceptFriendRequest(_state_friendList[index].id,
                            _state_friendList[index].name);
                        setState(() {
                          _state_friendList[index].status = "confirmed";
                        });
                      },
                      child: const Text("Accept"),
                    ),
                  );
                } else if (_state_friendList[index].status == "pending" &&
                    !_state_friendList[index].issued) {
                  return ListTile(
                    title: Text(_state_friendList[index].id),
                    subtitle: Text(_state_friendList[index].name),
                    leading: CircleAvatar(
                      backgroundImage:
                          AssetImage(_state_friendList[index].profileImage),
                    ),
                    trailing: Text("Pending"),
                  );
                } else {
                  return Container();
                }
              },
            ),
          ),
        SizedBox(height: 16.0),
        Text("Confirmed Friends"),
        SizedBox(
          width: 1000,
          child: SingleChildScrollView(
            controller:
                _scrollController, // Set the ScrollController to the SingleChildScrollView
            child: Column(
              children: [
                ListView.builder(
                  shrinkWrap: true,
                  controller:
                      _scrollController, // Set the ScrollController to the ListView.builder
                  itemCount: _state_friendList.length,
                  itemBuilder: (context, index) {
                    if (_state_friendList[index].status == "confirmed") {
                      return ListTile(
                        title: Text(_state_friendList[index].id),
                        subtitle: Text(_state_friendList[index].name),
                        leading: CircleAvatar(
                          backgroundImage:
                              AssetImage(_state_friendList[index].profileImage),
                        ),
                        trailing: OutlinedButton(
                          child: const Text("View Island"),
                          onPressed: () {
                            Navigator.push(
                              context,
                              MaterialPageRoute(
                                builder: (context) => FriendsIslandView(
                                  friendID: _state_friendList[index].id,
                                ),
                              ),
                            );
                          },
                        ),
                      );
                    } else {
                      return Container();
                    }
                  },
                ),
              ],
            ),
          ),
        ),
      ]),
    ));
  }
}
