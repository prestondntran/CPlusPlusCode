/* This program has a function that returns the first word of a string. */

string firstword(string s) {
  string new_s = "";
  for (int i = 0; i < s.length(); i++) {
    if (s[i].isspace())
      break;
    new_s += s[i];
  }
  return new_s;
}
