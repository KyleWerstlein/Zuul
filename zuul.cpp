#include<vector>
#include<iostream>
#include<cstring>
#include<map>
#include"room.h"

// things that work in cygin don't work in visual studio :(

using namespace std;

struct item {
	char name[20];
	bool isHeld = false;
};

void getExits(Room* currentRoom);

int main() {
  Room* list[15];
  item itemlist[5];
  vector<Room*> myrooms;
  char sendstr[25];
  char sendstr1[59];
  char sendstr2[23];
  char sendstr3[40];
  char sendstr4[22];
  char sendstr5[25];
  char sendstr6[49];
  char sendstr7[26];
  char sendstr8[30];
  char sendstr9[35];
  char sendstr10[36];
  char sendstr11[27];
  char sendstr12[30];
  char sendstr13[53];
  char sendstr14[65];
  char north[5];
  char east[4];
  char south[5];
  char west[4];
  strcpy_s(north, 6, "north");
  strcpy_s(east, 5, "east");
  strcpy_s(south, 6, "south");
  strcpy_s(west, 5, "west");
  map<int,char*> exits;
  Room* currentRoom = list[0];
  itemlist[0].name =
  itemlist[1] = new item();
  itemlist[2] = new item();
  itemlist[3] = new item();
  itemlist[4] = new item();
  list[0] = new Room();
  list[0]->setId(1);
  list[0]->setDescription(sendstr);
  list[1] = new Room();
  list[1]->setId(2);
  list[1]->setDescription(sendstr1);
  list[2] = new Room();
  list[2]->setId(3);
  list[2]->setDescription(sendstr2);
  list[3] = new Room();
  list[3]->setId(4);
  list[3]->setDescription(sendstr3);
  list[4] = new Room();
  list[4]->setId(5);
  list[4]->setDescription(sendstr4);
  list[5] = new Room();
  list[5]->setId(6);
  list[5]->setDescription(sendstr5);
  list[6] = new Room();
  list[6]->setId(7);
  list[6]->setDescription(sendstr6);
  list[7] = new Room();
  list[7]->setId(8);
  list[7]->setDescription(sendstr7);
  list[8] = new Room();
  list[8]->setId(9);
  list[8]->setDescription(sendstr8);
  list[9] = new Room();
  list[9]->setId(10);
  list[9]->setDescription(sendstr9);
  list[10] = new Room();
  list[10]->setId(11);
  list[10]->setDescription(sendstr10);
  list[11] = new Room();
  list[11]->setId(12);
  list[11]->setDescription(sendstr11);
  list[12] = new Room();
  list[12]->setId(13);
  list[12]->setDescription(sendstr12);
  list[13] = new Room();
  list[13]->setId(14);
  list[13]->setDescription(sendstr13);
  list[14] = new Room();
  list[14]->setId(15);
  list[14]->setDescription(sendstr14);
  strcpy_s(sendstr, 26, "You are at the entry way.");
  strcpy_s(sendstr1, 60, "You are standing on the deck. There's no way down though...");
  strcpy_s(sendstr2, 24, "You are in the kitchen.");
  strcpy_s(sendstr3, 41, "You go downstairs to the basement level.");
  strcpy_s(sendstr4, 23, "You are in the cellar.");
  strcpy_s(sendstr5, 26, "You are in the game room.");
  strcpy_s(sendstr6, 50, "You are in a short hallway in the basement level.");
  strcpy_s(sendstr7, 27, "You are in a storage room.");
  strcpy_s(sendstr8, 31, "You are in the guest bedroom.");
  strcpy_s(sendstr9, 36, "You are at a door, but it's locked.");
  strcpy_s(sendstr10, 37, "You are at the upstairs common area.");
  strcpy_s(sendstr11, 28, "You are in a kid's bedroom.");
  strcpy_s(sendstr12, 31, "You are in the master bedroom.");
  strcpy_s(sendstr13, 54, "You open the wardrobe, and notice a flimsy backpanel.");
  strcpy_s(sendstr14, 66, "You push the backpanel and it falls out, revealing a secret room.");
  //exits.insert(pair<int, char*>(list[0]->getId(), east));
 // exits.insert(pair<int, char*>(list[0]->getId(), west));
  list[0]->setW();
  list[0]->setE();
  
  bool isPlaying = true;
  cout << "You are trapped in a haunted mansion! Find a way out!" << endl;
  cout << "Type help for a list of commands." << endl;
  char command[20];
  vector<char*> currentExits;
  while(isPlaying) {
	 // cout << currentRoom->getId() << endl;
	//  cout << currentRoom->getDescription() << endl;
	  for (auto it = exits.begin(); it != exits.cend(); ++it) {
		  cout << exits[0] << endl;
	  }
    cin >> command;
    if(strcmp(command, "help") == 0) {
      cout << "help, go, get, drop, quit" << endl;
    }
    else if(strcmp(command, "quit") == 0) {
      isPlaying = 0;
    }
    else if(strstr(command,"go")) {
      
    }
	else if(strstr(command, "drop")) {

	}
	else if (strstr(command, "get")) {

	}
  }
}

void getExits(Room* currentRoom) {
      
    }
