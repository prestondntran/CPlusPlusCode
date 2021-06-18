/* This program asks a user for a number of quarters, dimes, nickels, and pennies and outputs the amount in dollars and cents.*/

#include <iostream>
using namespace std;
  
int main() {
  int quarters, dimes, nickels, pennies;
  float total;
  int dollars, cents;
  
  cout<<"Please enter the number of coins: "<<endl;
  cin>>"Number of quarters: ">>quarters>>endl;
  cin>>"Number of dimes: ">>dimes>>endl;
  cin>>"Number of nickels: ">>nickels>>endl;
  cin>>"Number of pennies: ">>pennies>>endl;
  
  total = ((float)quarters / 4.0) + ((float)dimes / 10.0) + ((float)nickels / 20.0) + ((float)pennies / 100.0)
  dollars = int(total)
  cents = total - dollars
  
  cout<<"The total is "<<dollars<<" dollars and "<<cents<<" cents."<<endl;
  return 0;
}
