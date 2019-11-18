#include<vector>
#include<iostream>
#include<cstring>
#include"room.h"

using namespace std;

int main() {
  Room* list[15];
  vector<Room*> myrooms;
  list[0] = new Room();
  list[0]->setId(1);
  list[1] = new Room();
  list[1]->setId(2);
  list[2] = new Room();
  list[2]->setId(3);
  list[3] = new Room();
  list[3]->setId(4);
  list[4] = new Room();
  list[4]->setId(5);
  list[5] = new Room();
  list[5]->setId(6);
  list[6] = new Room();
  list[6]->setId(7);
  list[7] = new Room();
  list[7]->setId(8);
  list[8] = new Room();
  list[8]->setId(9);
  list[9] = new Room();
  list[9]->setId(10);
  list[10] = new Room();
  list[10]->setId(11);
  list[11] = new Room();
  list[11]->setId(12);
  list[12] = new Room();
  list[12]->setId(13);
  list[13] = new Room();
  list[13]->setId(14);
  list[14] = new Room();
  list[14]->setId(15);
  Room currentRoom = list[0];
  bool isPlaying = true;
  cout << "You are trapped in a haunted mansion! Find a way out!" << endl;
  cout << "Type help for a list of commands." << endl;
  char command[20];
  while(isPlaying) {
    cin >> command;
    if(strcmp
  }
}
