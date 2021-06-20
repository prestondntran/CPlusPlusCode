/* This program asks the user for imperial height and weight and outputs the BMI with two decimal places. */

#include <iostream>
using namespace std;

int main() {
  float weight, height;
  float BMI;
  
  cout<<"Please enter weight in pounds: ";
  cin>>weight;
  cout<<"Please enter height in inches: ";
  cin>>height;
  
  weight = weight * 0.453592;
  height = height * 0.0254;
  
  BMI = weight / (height * height);
    
  cout<<"BMI is: ";
  printf("%.2f", BMI);
  
  return 0;
}
