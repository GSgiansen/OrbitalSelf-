import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:orbital_test_space/controllers/authFunctions.dart';
import 'package:orbital_test_space/main.dart';

Widget LoginForm(BuildContext context, bool login) {
  final _emailController = TextEditingController();
  final _passwordController = TextEditingController();
  return Form(
                  child: Container(
                    child: Column(
                      mainAxisSize: MainAxisSize.min,
                      children: <Widget>[
                        TextFormField(
                          key: ValueKey('email'),
                          controller: _emailController,
                          decoration: InputDecoration(
                            enabledBorder: OutlineInputBorder(
                              borderSide: BorderSide(color: Color(0xFF338a3e)),
                              borderRadius: BorderRadius.circular(25),
                            ),
                            focusedBorder: OutlineInputBorder(
                              borderSide: BorderSide(color: Color(0xFF66BB6A)),
                              borderRadius: BorderRadius.circular(25),
                            ),
                            labelText: 'Email',
                            labelStyle: TextStyle(color: Color(0xFF338a3e)),
                          ),
                        ),
                        SizedBox(height: 20),
                        TextFormField(
                          key: ValueKey('password'),
                          decoration: InputDecoration(
                            enabledBorder: OutlineInputBorder(
                              borderSide: BorderSide(color: Color(0xFF338a3e)),
                              borderRadius: BorderRadius.circular(25),
                            ),
                            focusedBorder: OutlineInputBorder(
                              borderSide: BorderSide(color: Color(0xFF66BB6A)),
                              borderRadius: BorderRadius.circular(25),
                            ),
                            labelText: 'Password',
                            labelStyle: TextStyle(color: Color(0xFF338a3e)),
                          ),
                          

                          controller: _passwordController,
                          obscureText: true,
                        ),
                        SizedBox(height: 30),
                        login ? ElevatedButton(
                            style: ButtonStyle(
                              backgroundColor: MaterialStateProperty.all<Color>(
                                  Color(0xFF338a3e)),
                              padding:
                                  MaterialStateProperty.all<EdgeInsetsGeometry>(
                                EdgeInsets.symmetric(
                                    horizontal: 50, vertical: 15),
                              ),
                              shape: MaterialStateProperty.all<
                                  RoundedRectangleBorder>(
                                RoundedRectangleBorder(
                                  borderRadius: BorderRadius.circular(25),
                                ),
                              ),
                            ),
                            child: Text(
                              'Login',
                              style: TextStyle(color: Colors.white),
                            ),
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
                                  )
                                  .then((value) =>
                                   value == "no user found" ?
                                    ScaffoldMessenger.of(context).showSnackBar(
                                      SnackBar(
                                        content:Text("User not found"),
                                        backgroundColor: Colors.red,)) :
                                    value == "wrong password" ?
                                    ScaffoldMessenger.of(context).showSnackBar(
                                       SnackBar(
                                        content:Text("Wrong password"),
                                        backgroundColor: Colors.red,)) :
                                    login = true);
                              print('email is ${_emailController.text}');
                            }) :
                            ElevatedButton(
                            style: ButtonStyle(
                              backgroundColor: MaterialStateProperty.all<Color>(
                                  Color(0xFF338a3e)),
                              padding:
                                  MaterialStateProperty.all<EdgeInsetsGeometry>(
                                EdgeInsets.symmetric(
                                    horizontal: 50, vertical: 15),
                              ),
                              shape: MaterialStateProperty.all<
                                  RoundedRectangleBorder>(
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
                                    content: Text('Password must be at least 6 characters'),
                                    backgroundColor: Colors.red,
                                  ),
                                );
                                return;
                              }
                              String check = 
                              Authservices.createUser(
                                  _emailController.text,
                                  _passwordController.text,
                                  ).then((value) => Authservices.signinUser(
                                  _emailController.text,
                                  _passwordController.text,)
                                      .then((value) => Navigator.push(
                                          context,
                                          MaterialPageRoute(
                                              builder: (context) =>
                                                  MyHomePage(title: _emailController.text)))
                                  )).then((value) =>
                                   value == "email-already-in-use" ?
                                    ScaffoldMessenger.of(context).showSnackBar(
                                      SnackBar(
                                        content:Text("Email already in use"),
                                        backgroundColor: Colors.red,)) :
                                    print("Registered and Signed up"));
                              login = true;
                              print('user is being created with ${_emailController.text}');
                            })
                            
                            ,
                      ],
                    ),
                  ),
                );
}
