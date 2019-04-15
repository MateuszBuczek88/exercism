#include "robot.h"
#include <vector>
#include <algorithm>
robot::robot() {set_name();}

robot::~robot() {}

multiset < string > robot::name_base;

void robot::reset() {
  auto pos = find(name_base.begin(), name_base.end(), name_);
  name_base.erase(pos);
  set_name();
}

bool robot::is_unique(string new_name) {
  if (name_base.size() == 0) return true;
  if (name_base.find(new_name)!= name_base.end()) return false;
  else
  return true;
}

void robot::set_name() {
  int token = 0;
  int num_token = 0;

    string temp;
do {
    temp.clear();
    for (int i = 0; i < 2; i++) {
      token = rand() % 25 + 65;
      temp.push_back(token);
    }
    for (int i = 0; i < 3; i++) {
      num_token = rand() % 9 + 48;
      temp.push_back(num_token);
    }
    if (is_unique(temp)) {
      name_ = temp;
    }
  } while (!is_unique(temp));
name_base.insert(name_);
}
