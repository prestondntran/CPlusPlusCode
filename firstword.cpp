/* This program has a function that returns the first word of a string. */

#include <string>
using namespace std;

string firstword(string s) {
  string new_s = "";
  int space = s.find(" ");
  new_s = s.substr(0, space)
  
  return new_s;
}
