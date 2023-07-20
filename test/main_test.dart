
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

          final accountFinder = find.text('My Account');
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
      test('Checking for local currency increase', () => null);

    });

    group('Friend checks', () {
      
    });

    group('Shop checks', () {

      
    });

    group('TaskProvider checks', () {
      test('Checking for task provider', () => null);
    });
}





var user1 = {
  "id": "12345678",
  "email": "johndoe@gmail.com", 
  "Water": 0,
  "Sleep": <Map<String, dynamic>>[],
  "Todo": <Map<String, dynamic>>[],
  "uid": "clown1",
};


Map<String,dynamic>  user2 = {
  "id": "23456789",
  "email": "giansen@gmail.com", 
  "Water": 0,
  "Sleep": <Map<String, dynamic>>[],
  "Todo": <Map<String, dynamic>>[],
  "uid": "clown2",
};



Map<String,dynamic>  user3 = {
  "id": "345678910",
  "email": "jason@gmail.com", 
  "Water": 0,
  "Sleep": <Map<String, dynamic>>[],
  "Todo": <Map<String, dynamic>>[],
  "uid": "clown3",
};




Map<String,dynamic>  user4 = {
  "id": "4567891011",
  "email": "mike@gmail.com", 
  "Water": 0,
  "Sleep": <Map<String, dynamic>>[],
  "Todo": <Map<String, dynamic>>[],
  "uid": "clown4",
};

