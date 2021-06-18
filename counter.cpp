/* This program asks a user for a number of quarters, dimes, nickels, and pennies and outputs the amount in dollars and cents.*/

#include <iostream>
using namespace std;
  
int main() {
  int quarters, dimes, nickels, pennies;
  float total;
  int dollars;
  float cents;
  
  cout<<"Please enter the number of coins: "<<endl;
  cout<<"Number of quarters: ";
  cin>>quarters;
  cout<<"\nNumber of dimes: ";
  cin>>dimes;
  cout<<"\nNumber of nickels: ";
  cin>>nickels;
  cout<<"\nNumber of pennies: ";
  cin>>pennies;
  
  total = ((float)quarters / 4.0) + ((float)dimes / 10.0) + ((float)nickels / 20.0) + ((float)pennies / 100.0);
  dollars = int(total);
  cents = (total - dollars) * 100;
  
  cout<<"the total is "<<dollars<<" dollars and "<<cents<<" cents"<<endl;
  return 0;
}
