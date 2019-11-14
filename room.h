#include <iostream>
#include <vector>

using namespace std;

struct item {
  char name[30];
};

class Room {
 public:
  
 private:
  char name[30];
  char exits[4];
  vector<item> items;
  
};
