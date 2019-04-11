#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
void reverse(char * begin, char * end, int lenght);

string revWords2(string & text) {
  int size = text.size();
  char * begin = & text[0];
  char * end = & text[0];

  for (int i = 0; i <= size; i++) {
    if (text[i] == ' ' || text[i] == 0) {
      end = & text[i] - 1;
      reverse(begin, end, i);
      begin = & text[i] + 1;
    }
  }
  reverse(text.begin(), text.end());
  return text;
}

void reverse(char * begin, char * end, int lenght) {
  
    for( auto i=begin ; i < end ; i++){
    swap( * begin, * end);
    begin++;
    end--;
  }
}

int main() {
  string string = "Test string for reversing words";
  cout << revWords2(string);

  return 0;
}
