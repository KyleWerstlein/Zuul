#include <iostream>
#include <vector>

using namespace std;

struct item {
  char name[30];
};

class Room {
 public:
  int getId();
  void setId(int newId);
  char* getDescription();
  void setDescription(char* newdesc);
 private:
  char name[30];
  char exits[4];
  vector<item> items;
  int id;
  char* description;
};
