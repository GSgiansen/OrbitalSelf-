
import 'package:firebase_auth/firebase_auth.dart';
import 'package:firebase_core/firebase_core.dart';
import 'package:flutter/material.dart';
import 'package:flutter_test/flutter_test.dart';
import 'package:orbital_test_space/controllers/fireStoreFunctions.dart';
import 'package:fake_cloud_firestore/fake_cloud_firestore.dart';
import 'package:firebase_core_platform_interface/firebase_core_platform_interface.dart';
import 'package:flutter/services.dart';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:mockito/mockito.dart';
import 'package:orbital_test_space/main.dart';
import 'package:orbital_test_space/pages/friends.dart';
import 'package:orbital_test_space/pages/friendsislandview.dart';
import 'package:orbital_test_space/pages/health.dart';
import 'package:orbital_test_space/pages/profilepage.dart';
import 'package:orbital_test_space/pages/unitypage.dart';

class MockUser extends Mock implements User {
  final String uid;
  final String email;
  final String displayName;
  final bool isAnonymous;

  MockUser({
    required this.uid,
    required this.email,
    required this.displayName,
    this.isAnonymous = false,
  });
}



typedef Callback = void Function(MethodCall call);

void setupFirebaseAuthMocks([Callback? customHandlers]) {
  TestWidgetsFlutterBinding.ensureInitialized();

  setupFirebaseCoreMocks();
}

Future<T> neverEndingFuture<T>() async {
  // ignore: literal_only_boolean_expressions
  while (true) {
    await Future.delayed(const Duration(minutes: 5));
  }
}
void main() {
  setupFirebaseAuthMocks();

  final user = MockUser(
    uid: '12345',
    email: 'giansen@gmail.com',
    displayName: 'Gian Sen',
  );
  setUpAll(() async {
    await Firebase.initializeApp();
  });


    group('Home page checks', () {
      testWidgets('Checking for header and bottom navbar', (tester) async {
    // Create the widget by telling the tester to build it.
          await tester.pumpWidget(MyHomePage(user: user));

          final titleFinder = find.text('Self++');
          expect(titleFinder, findsOneWidget);

          final healthFinder = find.text('My Health');
          expect(healthFinder, findsOneWidget);

          final friendsFinder = find.text('My Friends');
          expect(friendsFinder, findsOneWidget);

          final islandFinder = find.text('My Island');
          expect(islandFinder, findsOneWidget);

          final accountFinder = find.text('My Profile');
          expect(accountFinder, findsOneWidget);
      });

    });

    group('Currency checks', () {
      CurrencyNotifier currencyNotifier = CurrencyNotifier();
      test('Checking for currency set up', (
        ) async {
          expect(currencyNotifier.currency.value, 100);
      });
      test('Checking for currency increase', (
        ) async {
          currencyNotifier.increaseCurrency();
          expect(currencyNotifier.currency.value, 110);
      });

      test('Checking for currency decrease', (
        ) async {
          currencyNotifier.decreaseCurrency(10);
          expect(currencyNotifier.currency.value, 100);
      });
    });

    group('Health checks', () {
      CurrencyNotifier currencyNotifier = CurrencyNotifier();
      testWidgets('Checking if all the health cards load properly', (tester) async {
    // Create the widget by telling the tester to build it.
          await tester.pumpWidget(MaterialApp(
            home: MyHealthPage(user: user, currencyNotifier: currencyNotifier,)
            ));

          final pomodoroFinder = find.text('Pomodoro');
          expect(pomodoroFinder, findsOneWidget);

          final sleepFinder = find.text('Sleep');
          expect(sleepFinder, findsNWidgets(2));

          final waterFinder = find.text('Water');
          expect(waterFinder, findsNWidgets(2));

          final todoFinder = find.text('To Do List');
          expect(todoFinder, findsOneWidget);

          final toolsFinder = find.text('Tools');
          expect(toolsFinder, findsOneWidget);

          final completeButtonFinder = find.text('Complete');
          expect(completeButtonFinder, findsOneWidget);
      });
    });
    
    group('Checking if friends page loads as intended', () {
      CurrencyNotifier currencyNotifier = CurrencyNotifier();
      testWidgets('Checking if friends buttons are loaded properly', (tester) async {
    // Create the widget by telling the tester to build it.
          await tester.pumpWidget(
            MaterialApp(
              home: MyFriendsPage(user: user)
            )
          );

          final addFinder = find.text('Friend ID');
          expect(addFinder, findsOneWidget);

          final removeFinder = find.text('Add Friend');
          expect(removeFinder, findsOneWidget);

          final searchFinder = find.text('Confirmed Friends');
          expect(searchFinder, findsOneWidget);
      });
      
    });

    group('Checking if profile page loads as intended', () {
      CurrencyNotifier currencyNotifier = CurrencyNotifier();
      testWidgets('Checking if profile buttons are loaded properly', (tester) async {
    // Create the widget by telling the tester to build it.
          await tester.pumpWidget(
            MaterialApp(
              home: ProfilePage(user: user, currencyNotifier: currencyNotifier,)
            )
          );

          final outFinder = find.text('Log Out');
          expect(outFinder, findsOneWidget);

          final itemsFinder = find.text('My Inventory');
          expect(itemsFinder, findsOneWidget);
      });

    });
  


}

