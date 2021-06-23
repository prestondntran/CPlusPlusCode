/* This program asks the user for a year and determines whether the year is a leap year. */

#include <iostream>
#include <stdio.h> 
#include <stdlib.h>
using namespace std;

int main(int argc, char* argv[]) { 
  int year;
  
  if (argc == 1)
    return None
  else {
    year = atoi(argv[1]);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
      cout<<year<<" was a leap year"<<endl;
    else
      cout<<year<<" was not a leap year"<<endl;
  }
  return 0;
}
