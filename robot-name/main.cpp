#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include "robot.h"

using namespace std;

int main() {
    srand(time(NULL));
    vector<robot*>vec;
    for (int i=0; i <100000; i ++) {
    vec.push_back(new robot);
    }
    return 0;
}
