import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:orbital_test_space/controllers/authFunctions.dart';
import 'package:orbital_test_space/controllers/fireStoreFunctions.dart';
import 'package:orbital_test_space/main.dart';

Widget registerForm(BuildContext context, bool login) {
  final _emailController = TextEditingController();
  final _passwordController = TextEditingController();
  return Form(
    child: Container(
      child: Column(
        mainAxisSize: MainAxisSize.min,
        children: <Widget>[
          const Padding(
              padding: EdgeInsets.only(left: 41),
              child: Align(
                alignment: AlignmentDirectional.centerStart,
                child: Text('EMAIL',
                    style: TextStyle(
                      fontFamily: 'Rotorcap',
                      fontSize: 22,
                    )),
              )),
          SizedBox(
            height: 10,
          ),
          SizedBox(
            width: 350,
            child: TextFormField(
              key: ValueKey('email'),
              controller: _emailController,
              decoration: InputDecoration(
                border: InputBorder.none,
                filled: true,
                fillColor: const Color(0xFFd9d9d9),
                contentPadding:
                    EdgeInsets.symmetric(horizontal: 10, vertical: 12),
                enabledBorder: OutlineInputBorder(
                  borderSide: BorderSide.none,
                  borderRadius: BorderRadius.circular(15),
                ),
                focusedBorder: OutlineInputBorder(
                  borderSide: BorderSide.none,
                  borderRadius: BorderRadius.circular(15),
                ),
              ),
            ),
          ),
          const SizedBox(height: 20),
          const Padding(
              padding: EdgeInsets.only(left: 41),
              child: Align(
                alignment: AlignmentDirectional.centerStart,
                child: Text('PASSWORD',
                    style: TextStyle(
                      fontFamily: 'Rotorcap',
                      fontSize: 22,
                    )),
              )),
          SizedBox(
            width: 350,
            child: TextFormField(
              key: ValueKey('password'),
              controller: _passwordController,
              obscureText: true,
              decoration: InputDecoration(
                border: InputBorder.none,
                filled: true,
                fillColor: const Color(0xFFd9d9d9),
                contentPadding:
                    EdgeInsets.symmetric(horizontal: 10, vertical: 12),
                enabledBorder: OutlineInputBorder(
                  borderSide: BorderSide.none,
                  borderRadius: BorderRadius.circular(15),
                ),
                focusedBorder: OutlineInputBorder(
                  borderSide: BorderSide.none,
                  borderRadius: BorderRadius.circular(15),
                ),
              ),
            ),
          ),
          const SizedBox(height: 40),
          login
              ? OutlinedButton(
                  style: OutlinedButton.styleFrom(
                      shape: RoundedRectangleBorder(
                        borderRadius: BorderRadius.circular(15),
                      ),
                      foregroundColor: Colors.white,
                      side: const BorderSide(width: 3.0, color: Colors.white),
                      backgroundColor: const Color(0xFF377256),
                      padding: const EdgeInsets.symmetric(
                          vertical: 13.0, horizontal: 30.0),
                      textStyle: const TextStyle(
                        fontSize: 22,
                        fontFamily: 'Rotorcap',
                      )),
                  child: const Text('REGISTER'),
                  onPressed: () async {
                    if (!_emailController.text.contains('@')) {
                      ScaffoldMessenger.of(context).showSnackBar(
                        SnackBar(
                          content: Text('Please enter a valid email'),
                          backgroundColor: Colors.red,
                        ),
                      );
                      return;
                    }
                    Authservices.signinUser(
                      _emailController.text,
                      _passwordController.text,
                    ).then((value) => value == "no user found"
                        ? ScaffoldMessenger.of(context).showSnackBar(SnackBar(
                            content: Text("User not found"),
                            backgroundColor: Colors.red,
                          ))
                        : value == "wrong password"
                            ? ScaffoldMessenger.of(context)
                                .showSnackBar(SnackBar(
                                content: Text("Wrong password"),
                                backgroundColor: Colors.red,
                              ))
                            : {
                                login = true,
                                Navigator.push(
                                    context,
                                    MaterialPageRoute(
                                        builder: (context) => MyHomePage(
                                            user: _emailController.text))),
                                print('email is ${_emailController.text}'),
                              });
                    print('email is ${_emailController.text}');
                  })
              : ElevatedButton(
                  style: ButtonStyle(
                    backgroundColor:
                        MaterialStateProperty.all<Color>(Color(0xFF338a3e)),
                    padding: MaterialStateProperty.all<EdgeInsetsGeometry>(
                      EdgeInsets.symmetric(horizontal: 50, vertical: 15),
                    ),
                    shape: MaterialStateProperty.all<RoundedRectangleBorder>(
                      RoundedRectangleBorder(
                        borderRadius: BorderRadius.circular(25),
                      ),
                    ),
                  ),
                  child: Text(
                    'Register',
                    style: TextStyle(color: Colors.white),
                  ),
                  onPressed: () {
                    if (!_emailController.text.contains('@')) {
                      ScaffoldMessenger.of(context).showSnackBar(
                        SnackBar(
                          content: Text('Please enter a valid email'),
                          backgroundColor: Colors.red,
                        ),
                      );
                      return;
                    }
                    if ((_passwordController.text.trim().length < 6)) {
                      ScaffoldMessenger.of(context).showSnackBar(
                        SnackBar(
                          content:
                              Text('Password must be at least 6 characters'),
                          backgroundColor: Colors.red,
                        ),
                      );
                      return;
                    }
                    String check = Authservices.createUser(
                      _emailController.text,
                      _passwordController.text,
                    )
                        .then((value) => Authservices.signinUser(
                              _emailController.text,
                              _passwordController.text,
                            ).then((value) => {
                                  Navigator.push(
                                      context,
                                      MaterialPageRoute(
                                          builder: (context) => MyHomePage(
                                              user: _emailController.text))),
                                  FireStoreFunctions.addNewUser(
                                      _emailController.text,
                                      _passwordController.text)
                                }))
                        .then((value) => value == "email-already-in-use"
                            ? ScaffoldMessenger.of(context)
                                .showSnackBar(SnackBar(
                                content: Text("Email already in use"),
                                backgroundColor: Colors.red,
                              ))
                            : print("Registered and Signed up"));
                    login = true;
                    print(
                        'user is being created with ${_emailController.text}');
                  }),
        ],
      ),
    ),
  );
}
