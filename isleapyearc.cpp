/* This program asks the user for a year and determines whether the year is a leap year. */

#include <iostream>
using namespace std;

int main() {
  int user_year;
  
  cin>>user_year;
  
  if ((user_year % 4 == 0 && user_year % 100 != 0) || (user_year % 400 == 0))
    cout<<user_year<<" was a leap year"<<endl;
  else
    cout<<user_year<<" was not a leap year"<<endl;
  
  return 0;
}
