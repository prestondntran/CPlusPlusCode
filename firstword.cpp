/* This program has a function that returns the first word of a string. */

#include <string>
using namespace std;

string firstword(string s) {
  string new_s = "";
  char current_char;
  for (int i = 0; i < s.length(); i++) {
    current_char = s[i];
    if (current_char.isspace())
      break;
    new_s += s[i];
  }
  return new_s;
}
