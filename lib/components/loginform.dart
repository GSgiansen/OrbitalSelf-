import 'package:flutter/material.dart';
import 'package:orbital_test_space/controllers/authFunctions.dart';

Widget LoginForm(bool login) {
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
                              'PLS LOG IN',
                              style: TextStyle(color: Colors.white),
                            ),
                            onPressed: () {
                              login = true;
                              Authservices.signinUser(
                                  _emailController.text,
                                  _passwordController.text,
                                  );
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
                              login = true;
                              Authservices.createUser(
                                  _emailController.text,
                                  _passwordController.text,
                                  );
                              print('user is being created with ${_emailController.text}');
                            })
                            
                            ,
                      ],
                    ),
                  ),
                );
}
