/* This program reads a character from the user and returns its classification. */

#include <iostream>
#include <string>
using namespace std;

int main() {
  string user_char;
  
  cout<<"Enter a character: ";
  cin>>user_char;
  
  if (user_char >= "a" && user_char <= "z")
    cout<<user_char<<" is a lower case letter.";
  else if (user_char >= "0" && user_char <= "9")
    cout<<user_char<<" is a digit.";
  else if (user_char >= "A" && user_char <= "Z")
    cout<<user_char<<" is an upper case letter.";
  else
    cout<<user_char<<" is a non-alphanumeric character.";
  
  return 0;
}
