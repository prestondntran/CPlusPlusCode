/* This program asks the user for a positive integer n and returns the first n even numbers. */

#include <iostream>
using namespace std;

int main() {
  int num;
  int evens;
  int count;
  
  cout<<"Please enter a positive integer: ";
  cin>>num;
  
  for (count = 1; count <= num; count++) {
     cout<<(count * 2)<<endl;
  }
  
  return 0;
}
