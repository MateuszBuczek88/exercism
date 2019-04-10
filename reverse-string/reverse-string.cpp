#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string reverse_string(const std::string & text) {

  string output;
  output = text;
  reverse(output.begin(), output.end());
  return output;

}

string reverse_string_iter(const std::string & text) {

  string output;

  int size = text.size();

  for (int i = 0; i < size; ++i) {
    output.push_back(text[(size - 1) - i]);
  }
  return output;
}

int main() {

  string string = "Test string";
  cout << reverse_string_iter(string);

}
