/* This program has a function that returns a new version of the string without the first word. */

#include <string>

string remainingwords(string s) {
  string new_s = "";
  int space = s.find(" ");
  new_s = s.substr((space + 1), (s.length() - 1));
  
  return new_s;
}
