#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


string acronym(const string & str) {
  int size = str.size();
  string output;
  output.push_back(str[0]);

  for (int i = 1; i < size; i++) {
    if (str[i] == ' ' || str[i] == '-') {
      output.push_back(str[i + 1]);
    }
  }
  transform(output.begin(), output.end(), output.begin(), ::toupper);
  return output;
}

int main() {
  string string = "Complementary metal-oxide semiconductor";
  cout << acronym(string);

}
