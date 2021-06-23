/* This program asks the user for two grades and determines whether the user passes. */

#include <iostream>
using namespace std;

int main() {
  int grade1, grade2;
  
  cout<<"Please enter two grades, separated by a space: ";
  cin>>grade1>>grade2;
  
  if(grade1 < 60 && grade2 < 60)
    cout<<"Student Failed:("<<endl;
  else if(grade1 >= 95 && grade2 >= 95)
    cout<<"Student Graduated with Honors:)"<<endl;
  else
    cout<<"Student Graduated!"<<endl;
  
  return 0;  
}
