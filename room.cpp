#include <iostream>
#include "room.h"

using namespace std;

int Room::getId() {
  return id;
}

void Room::setId(int newId) {
  id = newId;
}

char* Room::getDescription() {
  return description;
}

void Room::setDescription(char* newdesc) {
  description = newdesc;
}

void Room::setN() {
	n = true;
}

void Room::setE() {
	e = true;
}

void Room::setS() {
	s = true;
}

void Room::setW() {
	w = true;
}
