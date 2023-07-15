
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:firebase_core/firebase_core.dart';
import 'package:flutter/material.dart';
import 'package:orbital_test_space/models/friend.dart';

class MyFriendsPage extends StatefulWidget {
  const MyFriendsPage({Key? key, required this.user}) : super(key: key);
  final User? user;

  @override
  State<MyFriendsPage> createState() => _FriendsPageState();
}

class _FriendsPageState extends State<MyFriendsPage> {

  List<dynamic> friends = [];
   final TextEditingController _friendIdController = TextEditingController();
  List<Friend> friendList = [];

   // getfriends will quert firebase for friends list
   //

  //accepts a list of confirmed friend names, have to iterate across friends collection to get name
  getFriendNames(List<dynamic> friends) async {
    final CollectionReference collection = FirebaseFirestore.instance.collection('friends');
    final QuerySnapshot querySnapshot = await collection.get();
    List<Friend> friendL = [];
    for (var friend in friends) {

      for (var doc in querySnapshot.docs) {
        if (doc.id == friend) {
          print("Friend ID: ${friend}");
          print("Friend Data: ${doc.data()}");

          friendL.add(Friend(
            id: friend,
            name: 'johncena',
            profileImage:'assets/images/johncena.jpg',
            status: 'confirmed'
          ));
          break;
        }
      }
    setState(() {
      print("friendlist is ");
      friendList = friendL;
    });
    }
  }

  getFriends() async { //gets the IDs associated with users from firebase
    User? user = FirebaseAuth.instance.currentUser;
    if (user != null) {
    DocumentSnapshot userSnapshot = await FirebaseFirestore.instance
            .collection('users')
            .doc(user.email)
            .get();

    //checking if the user has generated their ID
    if (userSnapshot.exists) {
      Map<String, dynamic>? userData = userSnapshot.data() as Map<String, dynamic>?;
      
      if (userData != null) {
        if (userData["id"] != null) {
          print(userData["id"]);
        }
        else {
          print("No id");
          String id = generateUserId();      
          FirebaseFirestore.instance
            .collection('users')
            .doc(user.email)
            .update({'id': id});
          print("generated id is" + id);
          AddToFriendCollection(userData["id"]);
        }


        if (userData["friends"] != null) {
          print(userData["friends"]);
          setState(() {
            friends = userData["friends"];
          });
          await getFriendNames(friends);
        }
        else {
          print("No friends");
          List<Friend> friends = [];
          FirebaseFirestore.instance
            .collection('users')
            .doc(user.email)
            .update({'friends': friends});

          setState(() {
            friends = [];
          });
        }
      }
    }
  }
  }

  //check if input friendID exists, and if do send a request to them
  CheckAnotherUser(String friendID) async{
    final CollectionReference collection = FirebaseFirestore.instance.collection('friends');
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
      AddAnotherUserAsFriend(friendID, friendemail);

    }
  }

  AddAnotherUserAsFriend(String friendID, String friendemail){
    print(friendemail);
    //add friendID to current user's friends list
    //add current user's ID to friendID's friends list
    //update both documents
    //update friends list
    //update friends list
    User? user = FirebaseAuth.instance.currentUser;

    if (user != null) {
      FirebaseFirestore.instance
        .collection('users')
        .doc(user.email)
        .update({
          'friends': FieldValue.arrayUnion([friendID])
        });

      FirebaseFirestore.instance
        .collection('users')
        .doc(friendemail)
        .update({
          'friends': FieldValue.arrayUnion([user.email])
        });
    }

  }

  AddToFriendCollection(String userID) async {
    final CollectionReference collection =
        FirebaseFirestore.instance.collection('friends');
    User? user = FirebaseAuth.instance.currentUser;
    collection.doc(userID).set({
      'email': user?.email,
    });
    
  }



  

  @override
  void initState() {
    super.initState();
    getFriends();
    getFriendNames(friends);
    print(friends);
  }


  @override
  Widget build(BuildContext context) {
    return Column(
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
                CheckAnotherUser(_friendIdController.text);
              },
              child: Text('Add Friend'),
            ),
            SizedBox(height: 16.0),
            Expanded(
              child: ListView.builder(
                itemCount: friendList.length,
                itemBuilder: (context, index) {
                  print(friendList[index]);
                  return ListTile(
                    title: Text(friendList[index].id),
                    subtitle: Text(friendList[index].name),
                    leading: CircleAvatar(
                      backgroundImage: AssetImage(friendList[index].profileImage),
                    ),
                    trailing: Text(friendList[index].status),
                  );
                },
              ),
            ),
      ],
    );

  }
}
