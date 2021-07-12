/* This program has a function that takes in a year as an input and determines whether that year is a leap year. */

using namespace std;

bool isleapyear(int inyear) {
   if ((inyear % 4 == 0 && inyear % 100 != 0) || (inyear % 400 == 0))
     return true;
   else 
     return false;
}
