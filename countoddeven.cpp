/* This program asks the user for four numbers and determines whether there are more odds or evens or the same amount. */

#include <iostream>
using namespace std;

int main() {
  int num1, num2, num3, num4;
  int even_count;
  
  cout<<"Please enter 4 positive integers, separated by a space: "<<endl;
  cin>>num1>>num2>>num3>>num4;
  
  if(num1 % 2 == 0)
    even_count += 1;
  if(num2 % 2 == 0)
    even_count += 1;
  if(num3 % 2 == 0)
    even_count += 1;
  if(num4 % 2 == 0)
    even_count += 1;
  
  if(even_count < 2)
    cout<<"more odds"<<endl;
  else if(even_count > 2)
    cout<<"more evens"<<endl;
  else
    cout<<"same number of evens and odds"<<endl;
  
  return 0;
}
