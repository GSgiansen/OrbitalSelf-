import 'package:flutter/material.dart';
import 'package:orbital_test_space/components/loginform.dart';

class MyCoverPage extends StatefulWidget {
  const MyCoverPage({Key? key, required this.title}) : super(key: key);
  final String title;

  @override
  State<MyCoverPage> createState() => _MyCoverPageState();
}

class _MyCoverPageState extends State<MyCoverPage> {
  @override
  Image img = Image.asset('web/forest.jpg');

  @override
  Widget build(BuildContext context) {
    var imgHeight = img.height;
    var imgWidth = img.width;
    return Scaffold(
        body: Stack(children: <Widget>[
      Container(
        width: MediaQuery.of(context).size.width * 1.5,
        decoration: const BoxDecoration(
            image: DecorationImage(image: AssetImage('web/forest.jpg'))),
      ),
      Center(
          child: Column(
              mainAxisAlignment: MainAxisAlignment.center,
              children: <Widget>[
            const Text('SELF++',
                style: TextStyle(
                    fontFamily: 'Rotorcap', fontSize: 95, color: Colors.white)),
            const SizedBox(height: 10.0),
            RichText(
                textAlign: TextAlign.center,
                text: const TextSpan(
                  style: TextStyle(
                      fontFamily: 'Rotorcap',
                      fontSize: 22,
                      color: Colors.white),
                  children: [
                    TextSpan(text: 'EMBARK ON YOUR JOURNEY TO\n'),
                    WidgetSpan(child: SizedBox(height: 25)),
                    TextSpan(text: 'LEVEL UP YOUR LIFESTYLE.')
                  ],
                )),
            const SizedBox(height: 24),
            OutlinedButton(
              onPressed: () {
                showModalBottomSheet(
                    constraints:
                        const BoxConstraints(maxHeight: 400, maxWidth: 375),
                    shape: RoundedRectangleBorder(
                      borderRadius: BorderRadius.circular(10.0),
                    ),
                    context: context,
                    builder: (context) =>
                        Loginpopup(imgheight: 400, imgwidth: 375));
                /* 
                Navigator.push(
                  context,
                  MaterialPageRoute(
                      builder: (context) => const MyLoginPage(title: "login")),
                );
                */
              },
              style: OutlinedButton.styleFrom(
                  shape: RoundedRectangleBorder(
                    borderRadius: BorderRadius.circular(20),
                  ),
                  foregroundColor: Colors.white,
                  side: const BorderSide(width: 3.0, color: Colors.white),
                  backgroundColor: const Color(0xFF377256),
                  padding: const EdgeInsets.all(12.0),
                  textStyle: const TextStyle(
                    fontSize: 22,
                    fontFamily: 'Rotorcap',
                  )),
              child: const Text('GET STARTED'),
            ),
          ]))
    ]));
  }
}

class Loginpopup extends StatelessWidget {
  Loginpopup({
    super.key,
    required double imgwidth,
    required double imgheight,
  });
  double imgwidth = 500;
  double imgheight = 375;

  @override
  Widget build(BuildContext context) {
    return Column(
      mainAxisAlignment: MainAxisAlignment.center,
      crossAxisAlignment: CrossAxisAlignment.center,
      children: [
        RichText(
            textAlign: TextAlign.center,
            text: TextSpan(
                style: TextStyle(
                    fontFamily: 'Rotorcap',
                    color: const Color(0xFF5c5a71),
                    fontSize: 0.08 * imgheight),
                children: [
                  //make the text responsive to screen size
                  TextSpan(
                      text: 'LOGIN\n',
                      style: TextStyle(fontSize: 0.15 * imgheight)),
                  TextSpan(
                      text: 'TO CONTINUE',
                      style: TextStyle(fontSize: 0.1 * imgheight))
                ])),
        const SizedBox(height: 5),
        LoginForm(context, true),
        const SizedBox(height: 5),
        TextButton(
          style: TextButton.styleFrom(
            backgroundColor: const Color(0xFFF4F4F4),
          ),
          onPressed: () {},
          child: const Text('FORGOT PASSWORD',
              style: TextStyle(
                  color: Colors.black, fontFamily: 'Rotorcap', fontSize: 16)),
        ),
        Row(
            mainAxisAlignment: MainAxisAlignment.center,
            crossAxisAlignment: CrossAxisAlignment.center,
            children: [
              const Text("DON'T HAVE AN ACCOUNT?",
                  style: TextStyle(
                      color: Colors.black,
                      fontFamily: 'Rotorcap',
                      fontSize: 16)),
              TextButton(
                  onPressed: () {
                    Navigator.pop(context);
                    showModalBottomSheet(
                        constraints:
                            const BoxConstraints(maxHeight: 400, maxWidth: 375),
                        shape: RoundedRectangleBorder(
                          borderRadius: BorderRadius.circular(10.0),
                        ),
                        context: context,
                        builder: (context) => Registerpopup(
                              imgwidth: 400,
                              imgheight: 375,
                            ));
                    /*
                    Navigator.push(
                        context,
                        MaterialPageRoute(
                            builder: (context) => const RegisterPage()));
                    */
                  },
                  child: const Text('SIGN UP',
                      style: TextStyle(
                          color: Colors.black,
                          fontFamily: 'Rotorcap',
                          fontSize: 16,
                          decoration: TextDecoration.underline)))
            ])
      ],
    );
  }
}

class Registerpopup extends StatelessWidget {
  Registerpopup({
    super.key,
    required double imgwidth,
    required double imgheight,
  });
  double imgwidth = 500;
  double imgheight = 375;

  @override
  Widget build(BuildContext context) {
    return Column(
      mainAxisAlignment: MainAxisAlignment.center,
      crossAxisAlignment: CrossAxisAlignment.center,
      children: [
        RichText(
            textAlign: TextAlign.center,
            text: TextSpan(
                style: TextStyle(
                    fontFamily: 'Rotorcap',
                    color: const Color(0xFF5c5a71),
                    fontSize: 0.08 * imgheight),
                children: [
                  //make the text responsive to screen size
                  TextSpan(
                      text: 'Welcome\n',
                      style: TextStyle(fontSize: 0.15 * imgheight)),
                  TextSpan(
                      text: 'TO SELF++',
                      style: TextStyle(fontSize: 0.1 * imgheight))
                ])),
        const SizedBox(height: 5),
        LoginForm(context, true),
        const SizedBox(height: 5),
        TextButton(
          style: TextButton.styleFrom(
            backgroundColor: const Color(0xFFF4F4F4),
          ),
          onPressed: () {},
          child: const Text('FORGOT PASSWORD',
              style: TextStyle(
                  color: Colors.black, fontFamily: 'Rotorcap', fontSize: 16)),
        ),
        Row(
            mainAxisAlignment: MainAxisAlignment.center,
            crossAxisAlignment: CrossAxisAlignment.center,
            children: [
              const Text("HAVE AN ACCOUNT?",
                  style: TextStyle(
                      color: Colors.black,
                      fontFamily: 'Rotorcap',
                      fontSize: 16)),
              TextButton(
                  onPressed: () {
                    Navigator.pop(context);
                    showModalBottomSheet(
                        constraints:
                            const BoxConstraints(maxHeight: 400, maxWidth: 375),
                        shape: RoundedRectangleBorder(
                          borderRadius: BorderRadius.circular(10.0),
                        ),
                        context: context,
                        builder: (context) => Loginpopup(
                              imgwidth: 400,
                              imgheight: 375,
                            ));
                  },
                  child: const Text('Register',
                      style: TextStyle(
                          color: Colors.black,
                          fontFamily: 'Rotorcap',
                          fontSize: 16,
                          decoration: TextDecoration.underline)))
            ])
      ],
    );
  }
}
