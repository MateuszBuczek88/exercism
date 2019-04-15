#ifndef ROBOT_H
#define ROBOT_H
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <set>
using namespace std;

class robot {
 public:
    robot();
    ~robot();

  void set_name();
  bool is_unique(string new_name);
  const string & name() const {return name_;}
  void reset();

 private:
  string name_;
  static multiset < string > name_base;
};

#endif  // ROBOT_H
