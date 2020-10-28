import 'package:flutter/material.dart';
void main(){
  runApp(MaterialApp(
    title: "No Fap",
    home: TutorialHome(),
  ));
}
class TutorialHome extends StatelessWidget{
  @override
  Widget build(BuildContext context){
    return Scaffold(
      appBar: AppBar(
        leading: IconButton(icon: Icon(Icons.menu), tooltip: "Navigation menu", onPressed: null,),
        title: Center(
          child: Text ('Hello world'),
        ),
        actions: <Widget>[
          IconButton(
              icon: Icon(Icons.search),
              tooltip: "Search",
              onPressed: null)
        ],
      ),

      body: Center(
        child: Text('No fap is your purpose you have to reach'),
      ),
      floatingActionButton: FloatingActionButton(
        tooltip: "Add",
        child: Icon(Icons.add),
        onPressed: null,
      ),
    );
  }
}