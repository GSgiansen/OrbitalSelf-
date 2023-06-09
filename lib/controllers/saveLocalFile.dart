import 'package:firebase_storage/firebase_storage.dart';
import 'package:path_provider/path_provider.dart';
import 'dart:io';


Future<void> downloadFileFromStorage(String fileUrl, String localFilePath) async {
  // Create a reference to the file in Firebase Storage
  Reference ref = FirebaseStorage.instance.refFromURL(fileUrl);

  // Get the download URL of the file
  String downloadUrl = await ref.getDownloadURL();

  // Create a file object for the local file path
  File localFile = File(localFilePath);

  // Download the file to the local file path
  await ref.writeToFile(localFile);
}


void saveFileToLocal() async {
  final fileUrl = 'gs://orbital-best-app.appspot.com/templates/template_scene.unity';
  final localFilePath = await getLocalFilePath(); // Use the path_provider package to get the local file path
  
  await downloadFileFromStorage(fileUrl, localFilePath);
  
  print('File downloaded and saved to $localFilePath');
}

Future<String> getLocalFilePath() async {
  final directory = await getApplicationDocumentsDirectory();
  print(directory);
  final localFilePath = '${directory.path}/file_name.extension';
  return localFilePath;
}