/* This program asks the user for the prices of two items as well as whether they are a club card member and outputs their total. */

#include <iostream>
#include <string>
using namespace std;

int main() {
  float price1, price2;
  char member;
  float tax;
  float total;
  
  cout<<"Enter price of the first item: ";
  cin>>price1;
  cout<<"Enter price of the second item: ";
  cin>>price2;
  cout<<"Does customer have a club card? (Y/N): ";
  cin>>member;
  cout<<"Enter tax rate, e.g. 5.5 for 5.5% tax: ";
  cin>>tax;
  
  total = price1 + price2
  cout<<"Base price = "<<total<<endl;
  
  if (price1 < price2)
    price1 *= 0.5;
  else
    price2 *= 0.5;
  
  if (member == "Y" || member == "y")
    total = (price1 + price2) * 0.9;
  else
    total = price1 + price2;
  cout<<"Price after discounts = "<<total<<endl;
  
  total = total + (total * tax);
  total = int((total * 100) + 0.5);
  total = (float)total / 100;
  cout<<"Total price = "<<total<<endl;
  
  return 0;
}
