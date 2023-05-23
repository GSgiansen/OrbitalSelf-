import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:orbital_test_space/pages/login.dart';

class ProfilePage extends StatefulWidget {
  final String title;
  const ProfilePage({Key? key, required this.title}) : super(key: key);
  
  @override
  State<ProfilePage> createState() => _ProfilePageState();
}

class _ProfilePageState extends State<ProfilePage> {
  //here should house all the user data when login is implemented
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        automaticallyImplyLeading: false,
        backgroundColor: Colors.blue,
        title: Text(widget.title),
      ),
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: <Widget>[
            Text('Profile Page'),
            ElevatedButton(
              onPressed: () {
                ;
              },
              child: Text('Back'),
            ),
            Text('Signout'),
            ElevatedButton(
              onPressed: () async {
                await FirebaseAuth.instance.signOut().then((value) => Navigator.push(
                  context,
                  MaterialPageRoute(builder: (context) => const MyLoginPage(title:"login")),
                ));
              },
              child: Text('gtfo'),
            ),
          ],
        ),
      ),
    );
  }
}