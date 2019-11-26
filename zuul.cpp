#include<vector>
#include<iostream>
#include<cstring>
#include<map>
#include"room.h"

using namespace std;

void getExits(Room* currentRoom);

int main() {
  Room* list[15];
  vector<Room*> myrooms;
  char sendstr[200];
  char north[5];
  char east[4];
  char south[5];
  char west[4];
  strcpy(north, "north");
  strcpy(east, "east");
  strcpy(south, "south");
  strcpy(west, "west");
  map<Room*,char*> exits;
  list[0] = new Room();
  list[0]->setId(1);
  strcpy(sendstr, "You are at the entry way.");
  list[0]->setDescription(sendstr);
  exits.insert(pair<Room*,char*>(list[0], east));
  exits.insert(pair<Room*,char*>(list[0], west));
  list[1] = new Room();
  list[1]->setId(2);
  strcpy(sendstr, "You are standing on the deck. There's no way down though...");
  list[1]->setDescription(sendstr);
  list[2] = new Room();
  list[2]->setId(3);
  strcpy(sendstr, "You are in the kitchen.");
  list[2]->setDescription(sendstr);
  list[3] = new Room();
  list[3]->setId(4);
  strcpy(sendstr, "You go downstairs to the basement level.");
  list[3]->setDescription(sendstr);
  list[4] = new Room();
  list[4]->setId(5);
  strcpy(sendstr, "You are in the cellar.");
  list[4]->setDescription(sendstr);
  list[5] = new Room();
  list[5]->setId(6);
  strcpy(sendstr, "You are in the game room.");
  list[5]->setDescription(sendstr);
  list[6] = new Room();
  list[6]->setId(7);
  strcpy(sendstr, "You are in a short hallway in the basement level.");
  list[6]->setDescription(sendstr);
  list[7] = new Room();
  list[7]->setId(8);
  strcpy(sendstr, "You are in a storage room.");
  list[7]->setDescription(sendstr);
  list[8] = new Room();
  list[8]->setId(9);
  strcpy(sendstr, "You are in the guest bedroom");
  list[8]->setDescription(sendstr);
  list[9] = new Room();
  list[9]->setId(10);
  strcpy(sendstr, "You are at a door, but it's locked.");
  list[9]->setDescription(sendstr);
  list[10] = new Room();
  list[10]->setId(11);
  strcpy(sendstr, "You are at the upstairs common area.");
  list[10]->setDescription(sendstr);
  list[11] = new Room();
  list[11]->setId(12);
  strcpy(sendstr, "You are in a kid's bedroom");
  list[11]->setDescription(sendstr);
  list[12] = new Room();
  list[12]->setId(13);
  strcpy(sendstr, "You are in the master bedroom");
  list[12]->setDescription(sendstr);
  list[13] = new Room();
  list[13]->setId(14);
  strcpy(sendstr, "You open the wardrobe, and notice a flimsy backpanel");
  list[13]->setDescription(sendstr);
  list[14] = new Room();
  list[14]->setId(15);
  strcpy(sendstr, "You push the backpanel and it falls out, revealing a secret room");
  list[14]->setDescription(sendstr);
  Room* currentRoom = list[2];
  bool isPlaying = true;
  cout << "You are trapped in a haunted mansion! Find a way out!" << endl;
  cout << "Type help for a list of commands." << endl;
  char command[20];
  vector<char*> currentExits;
  while(isPlaying) {
    for(int i = 0; i < 15; i++) {
      cout << list[i]->getDescription() << endl;
    }
      //cout << currentRoom->getId();
      //cout << currentRoom->getDescription() << endl;
    cin >> command;
    if(strcmp(command, "help") == 0) {
      cout << "help, go, get, drop, quit" << endl;
    }
    else if(strcmp(command, "quit") == 0) {
      isPlaying = 0;
    }
    else if(strstr(command,"go")) {
      
    }
  }
}

void getExits(Room* currentRoom) {
      
    }
