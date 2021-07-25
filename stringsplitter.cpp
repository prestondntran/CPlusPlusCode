/* This program asks the user for a string with an odd number of characters and returns the middle character, the first half, and the second half. */

#include <iostream>
#include <string>
using namespace std;

int main() {
  string str1;
  int str_len, mid_char;
  
  cout<<"Enter an odd length string: ";
  getline(cin, str1);
  str_len = str1.length();
    
  mid_char = (str_len / 2) + 1;
  cout<<"Middle character: "<<str1[mid_char]<<endl;
  
  cout<<"First half: "<<str1.substr(0, (mid_char - 1))<<endl;
  
  cout<<"Second half: "<<str1.substr((mid_char + 1), (str_len - 1))<<endl;
  
  return 0;
}
