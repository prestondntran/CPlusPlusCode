/* This program has a function that takes in a year as an input and determines whether that year is a leap year. */

using namespace std;

bool isleapyear(int inyear) {
   if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
     return True;
   else 
     return False;
}
