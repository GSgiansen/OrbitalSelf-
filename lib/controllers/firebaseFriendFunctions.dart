
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:firebase_auth/firebase_auth.dart';

AddAnotherUserAsFriend(String friendID, String friendemail) {
    print(friendemail);
    //add friendID to current user's friends list
    //add current user's ID to friendID's friends list
    //update both documents
    //update friends list
    //update friends list
    User? user = FirebaseAuth.instance.currentUser;

    if (user != null) {
      FirebaseFirestore.instance.collection('users').doc(user.email).update({
        'friends': FieldValue.arrayUnion([friendID])
      });

      FirebaseFirestore.instance.collection('users').doc(friendemail).update({
        'friends': FieldValue.arrayUnion([user.email])
        //change to user.id, query for it
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