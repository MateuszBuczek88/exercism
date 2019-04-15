#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

bool is_isogram(std::string const & text) {
    if (text.empty()) throw length_error("Empty input String");
  string str = text;
  transform(str.begin(), str.end(), str.begin(), ::tolower);
  string temp;
  for (int i = 0; i < str.size(); i++) {
    if (str[i] == ' ' || str[i] == '-') {} else {
      temp.push_back(str[i]);
    }
  }
  str.clear();
  str = temp;
  set < char > check;

  for (char a: str) {
    check.insert(a);
  }
  if (str.size() != check.size()) return false;
  else return true;

}

bool is_isogram2(std::string const & text) {
     if (text.empty()) throw length_error("Empty input String");
    string str = text;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    string temp;
    for (int i = 0; i < str.size(); i++) {
      if (str[i] == ' ' || str[i] == '-') {} else {
        temp.push_back(str[i]);
      }
    }
    str.clear();
    str = temp;
    int check[256] = {
      0
    };

    for (int i = 0; i < str.size(); i++) {
      check[str[i]] += 1;

    }
    for (int i = 0; i <= 256; i++) {
      if (check[i] > 1) return false;
    }
    return true;  
 

}

int main()
{
    string str = "asd";
   cout<< is_isogram(str);

    return 0;
}

