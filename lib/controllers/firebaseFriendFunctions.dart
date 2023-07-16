import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';
import 'package:firebase_core/firebase_core.dart';

AddAnotherUserAsFriend(String friendID, String friendemail) async {
  print(friendemail);
  //add friendID to current user's friends list
  //add current user's ID to friendID's friends list
  //update both documents
  //update friends list
  //update friends list
  User? user = FirebaseAuth.instance.currentUser;
  String userID ='';
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

  Map<String, dynamic> friendInfo = {
    'friendID': friendID,
    'friendemail': friendemail,
    'status': 'pending',
  };

  Map<String, dynamic> currUserInfo = {
    'friendID': userID,
    'friendemail': user?.email,
    'status': 'pending',
  };
  

  if (user != null) {
    FirebaseFirestore.instance.collection('users').doc(user.email).update({
      'friends': FieldValue.arrayUnion([friendInfo])
      });
    
  

    FirebaseFirestore.instance.collection('users').doc(friendemail).update({
      'friends': FieldValue.arrayUnion([currUserInfo])
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


// add to the currusuer a request, but mark as pending
SendRequestToAnotherUser(
  String friendID, String friendemail, User? curruser) async {
  DocumentSnapshot userSnapshot = await FirebaseFirestore.instance
      .collection('users')
      .doc(curruser?.email)
      .get();

  
}


AcceptFriendRequest(String friendID, String friendemail) async {
    //change the status of the friend request to accepted
    User? user = FirebaseAuth.instance.currentUser;
    String userID = '';
    if (user != null) {
      //add the friend to the user's friend list
    DocumentSnapshot userSnapshot = await FirebaseFirestore.instance
          .collection('users')
          .doc(user.email)
          .get();
    if (userSnapshot.exists) {
      Map<String, dynamic>? userData =
            userSnapshot.data() as Map<String, dynamic>?;
      if (userData != null) {
        if (userData["id"] != null) {
          userID = userData["id"];
          }
        }
        List<Map<String, dynamic>> friends =
                List<Map<String, dynamic>>.from(userData?["friends"]);
        int index = friends.indexWhere((friend) => friend["friendID"] == friendID);
        friends[index]["status"] = "confirmed";
        FirebaseFirestore.instance
          .collection('users')
          .doc(user.email)
          .update({
            'friends': friends
          });
      }
    }

    //add the user to the friend's friend list

    DocumentSnapshot friendSnapshot = await FirebaseFirestore.instance
          .collection('users')
          .doc(friendemail)
          .get();
    if (friendSnapshot.exists) {
      Map<String, dynamic>? friendData =
            friendSnapshot.data() as Map<String, dynamic>?;
      if (friendData != null) {
        List<Map<String, dynamic>> friends2 =
                List<Map<String, dynamic>>.from(friendData["friends"]);
        int index = friends2.indexWhere((friend) => friend["friendID"] == userID);
        friends2[index]["status"] = "confirmed";
        FirebaseFirestore.instance
          .collection('users')
          .doc(friendemail)
          .update({
            'friends': friends2
          });
      }
    }

}

  