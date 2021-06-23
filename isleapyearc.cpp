/* This program asks the user for a year and determines whether the year is a leap year. */

#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {  
  if ((argv[1] % 4 == 0 && argv[1] % 100 != 0) || (argv[1] % 400 == 0))
    cout<<argv[1]<<" was a leap year"<<endl;
  else
    cout<<argv[1]<<" was not a leap year"<<endl;
  
  return 0;
}
