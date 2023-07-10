import 'package:firebase_auth/firebase_auth.dart';
import 'package:flutter/material.dart';
import 'package:orbital_test_space/controllers/authFunctions.dart';
import 'package:orbital_test_space/controllers/fireStoreFunctions.dart';
import 'package:orbital_test_space/main.dart';

const ratio = 0.02;
Image image = Image.asset('web/forest_login.jpg');
var heightImg = image.width?.toDouble();

Widget LoginForm(BuildContext context, bool login) {
  final emailController = TextEditingController();
  final passwordController = TextEditingController();
  return SingleChildScrollView(
    child: Form(
      child: Container(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: <Widget>[
            EmailField(emailController: emailController),
            PasswordField(passwordController: passwordController),
            login
                ? LoginButton(
                    emailController: emailController,
                    passwordController: passwordController)
                : RegisterButton(
                    emailController: emailController,
                    passwordController: passwordController),
          ],
        ),
      ),
    ),
  );
}

class RegisterButton extends StatelessWidget {
  const RegisterButton({
    super.key,
    required TextEditingController emailController,
    required TextEditingController passwordController,
  })  : _emailController = emailController,
        _passwordController = passwordController;

  final TextEditingController _emailController;
  final TextEditingController _passwordController;

  @override
  Widget build(BuildContext context) {
    var height = MediaQuery.of(context).size.height;
    return OutlinedButton(
        style: OutlinedButton.styleFrom(
            shape: RoundedRectangleBorder(
              borderRadius: BorderRadius.circular(15),
            ),
            foregroundColor: Colors.white,
            side: const BorderSide(width: 3.0, color: Colors.white),
            backgroundColor: const Color(0xFF377256),
            padding:
                const EdgeInsets.symmetric(vertical: 13.0, horizontal: 30.0),
            textStyle: TextStyle(
              fontSize: ratio * height,
              fontFamily: 'Rotorcap',
            )),
        child: const Text(
          'Register',
          style: TextStyle(color: Colors.white),
        ),
        onPressed: () {
          if (!_emailController.text.contains('@')) {
            ScaffoldMessenger.of(context).showSnackBar(
              const SnackBar(
                content: Text('Please enter a valid email'),
                backgroundColor: Colors.red,
              ),
            );
            return;
          }
          if ((_passwordController.text.trim().length < 6)) {
            ScaffoldMessenger.of(context).showSnackBar(
              const SnackBar(
                content: Text('Password must be at least 6 characters'),
                backgroundColor: Colors.red,
              ),
            );
            return;
          }
          Authservices.createUser(
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
                                builder: (context) => MyHomePage(user: value))),
                        FireStoreFunctions.addNewUser(
                            _emailController.text, _passwordController.text)
                      }))
              .then((value) => value == "email-already-in-use"
                  ? ScaffoldMessenger.of(context).showSnackBar(const SnackBar(
                      content: Text("Email already in use"),
                      backgroundColor: Colors.red,
                    ))
                  : print("Registered and Signed up"));
          print('user is being created with ${_emailController.text}');
        });
  }
}

class LoginButton extends StatelessWidget {
  const LoginButton({
    super.key,
    required TextEditingController emailController,
    required TextEditingController passwordController,
  })  : _emailController = emailController,
        _passwordController = passwordController;

  final TextEditingController _emailController;
  final TextEditingController _passwordController;
  @override
  Widget build(BuildContext context) {
    var height = MediaQuery.of(context).size.height;
    return OutlinedButton(
        style: OutlinedButton.styleFrom(
            shape: RoundedRectangleBorder(
              borderRadius: BorderRadius.circular(15),
            ),
            foregroundColor: Colors.white,
            side: const BorderSide(width: 3.0, color: Colors.white),
            backgroundColor: const Color(0xFF377256),
            padding:
                const EdgeInsets.symmetric(vertical: 13.0, horizontal: 30.0),
            textStyle: TextStyle(
              fontSize: ratio * height,
              fontFamily: 'Rotorcap',
            )),
        child: const Text('LOGIN'),
        onPressed: () async {
          if (!_emailController.text.contains('@')) {
            ScaffoldMessenger.of(context).showSnackBar(
              const SnackBar(
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
              ? ScaffoldMessenger.of(context).showSnackBar(const SnackBar(
                  content: Text("User not found"),
                  backgroundColor: Colors.red,
                ))
              : value == "wrong password"
                  ? ScaffoldMessenger.of(context).showSnackBar(const SnackBar(
                      content: Text("Wrong password"),
                      backgroundColor: Colors.red,
                    ))
                  : {
                      //login = true,
                      Navigator.push(
                          context,
                          MaterialPageRoute(
                              builder: (context) => MyHomePage(user: value))),
                      print('email is ${_emailController.text}'),
                    });
          print('email is ${_emailController.text}');
        });
  }
}

class PasswordField extends StatelessWidget {
  const PasswordField({
    super.key,
    required TextEditingController passwordController,
  }) : _passwordController = passwordController;

  final TextEditingController _passwordController;

  @override
  Widget build(BuildContext context) {
    var height = MediaQuery.of(context).size.height;
    var width = MediaQuery.of(context).size.width;
    return FittedBox(
      fit: BoxFit.contain,
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          const SizedBox(height: 20),
          FittedBox(
            fit: BoxFit.contain,
            child: Text(
              'PASSWORD',
              style: TextStyle(
                fontFamily: 'Rotorcap',
                fontSize: ratio * height,
              ),
            ),
          ),
          const SizedBox(height: 10),
          Container(
            child: FittedBox(
              fit: BoxFit.contain,
              child: SizedBox(
                width: 0.75 * width,
                child: TextFormField(
                  key: const ValueKey('password'),
                  controller: _passwordController,
                  obscureText: true,
                  decoration: InputDecoration(
                    border: InputBorder.none,
                    filled: true,
                    fillColor: const Color(0xFFd9d9d9),
                    contentPadding: const EdgeInsets.symmetric(
                        horizontal: 10, vertical: 12),
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
            ),
          ),
          const SizedBox(height: 40),
        ],
      ),
    );
  }
}

class EmailField extends StatelessWidget {
  const EmailField({
    super.key,
    required TextEditingController emailController,
  }) : _emailController = emailController;

  final TextEditingController _emailController;

  @override
  Widget build(BuildContext context) {
    var height = MediaQuery.of(context).size.height;
    var width = MediaQuery.of(context).size.width;

    return FittedBox(
      fit: BoxFit.contain,
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.start,
        children: [
          FittedBox(
            fit: BoxFit.contain,
            child: Text(
              'EMAIL',
              style: TextStyle(
                fontFamily: 'Rotorcap',
                fontSize: ratio * height,
              ),
            ),
          ),
          const SizedBox(
            height: 10,
          ),
          Container(
            child: FittedBox(
              fit: BoxFit.contain,
              child: SizedBox(
                width: 0.75 * width,
                child: TextFormField(
                  key: const ValueKey('email'),
                  controller: _emailController,
                  decoration: InputDecoration(
                    border: InputBorder.none,
                    filled: true,
                    fillColor: const Color(0xFFd9d9d9),
                    contentPadding: const EdgeInsets.symmetric(
                        horizontal: 10, vertical: 12),
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
            ),
          ),
        ],
      ),
    );
  }
}
