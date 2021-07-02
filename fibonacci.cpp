/* This program asks the user for a positive integer n greater than 1 and prints the first n Fibonacci numbers. */

#include <iostream>
using namespace std;

int main() {
  int num;
  int count;
  int current_num;
  int prev_num;
  int temp;
  
  cout<<"Please enter a positive integer greater than 1: ";
  cin>>num;
  
  current_num = 1;
  cout<<current_num<<endl;
  prev_num = current_num;
  
  for (count = 2; count <= num; count++) {
    cout<<current_num<<endl;
    temp = current_num;
    current_num += prev_num;
    prev_num = temp;
  }
  
  return 0;
}
