import 'package:firebase_auth/firebase_auth.dart';
class Authservices {
  static signinUser(String email, password) async {

    try {
      await FirebaseAuth.instance
          .signInWithEmailAndPassword(email: email, password: password);
      print('authServices success');
      // print(FirebaseAuth.instance.currentUser);
      return FirebaseAuth.instance.currentUser;
    } on FirebaseAuthException catch (e) {
      if (e.code == 'user-not-found') {
        //print('No user found for that email.');
        return "no user found";

      } else if (e.code == 'wrong-password') {
        //print('password bad'); 
        return "wrong password";

      }
      else {
        return "error";
      }
    }
  }
  static createUser(String email, password) async {
    try {
      await FirebaseAuth.instance
          .createUserWithEmailAndPassword(email: email, password: password);
      
      return FirebaseAuth.instance.currentUser;
    } on FirebaseAuthException catch (e) {
      if (e.code == 'weak-password') {
        print( 'The password provided is too weak.');
      } else if (e.code == 'email-already-in-use') {
        return 'email-already-in-use';
      }
    } catch (e) {
      return 'Error creating user';
    }
  }
}