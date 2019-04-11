#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

string wordsReverse(const string & text) {
  string output = text;
  vector < string > vec;
  string delimiter = " ";

  while (output.find(delimiter) + 1) {
    vec.push_back(output.substr(0, output.find(delimiter)));
    output.erase(0, output.find(delimiter) + delimiter.length());
  }
  vec.push_back(output.substr(0));

  reverse(vec.begin(), vec.end());
  output.clear();
  for (auto x : vec) {
    output = output + x + " ";
  }
  return output;
}

int
main() {
  string string = "Test string for words order reversing";
  cout << wordsReverse(string);
}
