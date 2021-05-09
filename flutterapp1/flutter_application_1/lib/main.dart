import 'dart:html';

import 'package:flutter/material.dart';

void main() {
  runApp(
    MaterialApp(
      home: Scaffold(
        backgroundColor: Colors.black,
        appBar: AppBar(
          title: Text('Hello world!'),
          backgroundColor: Colors.red[900],
        ),
      ),
    ),
  );
}
