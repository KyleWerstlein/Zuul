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
  void setN();
  void setE();
  void setS();
  void setW();
 private:
  char name[30];
  char exits[4];
  vector<item> items;
  int id;
  char* description;
  bool n = false;
  bool e = false;
  bool s = false;
  bool w = false;
};
