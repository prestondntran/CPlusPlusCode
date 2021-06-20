/* This program asks the user for an amount of dollars and cents and outputs the amount in quarters, dimes, nickels, and pennies. */

#include <iostream>
using namespace std;

int main() {
  int dollars, cents;
  int quarters, dimes, nickels, pennies;
  
  cout<<"Please enter the amount of money to convert: "<<endl;
  cout<<"# of dollars: ";
  cin>>dollars;
  cout<<"# of cents: ";
  cin>>cents;
  
  quarters = cents / 25;
  dimes = (cents % 25) / 10;
  nickels = ((cents % 25) % 10) / 5;
  pennies = ((cents % 25) % 10) % 5;
  quarters = (dollars * 4) + quarters;
    
  cout<<"the coins are "<<quarters<<" quarters, "<<dimes<<" dimes, "<<nickels<<" nickels and "<<pennies<<" pennies";
    
  return 0;
}
