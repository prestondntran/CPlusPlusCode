/* This program asks the user for metric height and weight and outputs the BMI and the status. */

#include <iostream>
#include <string>
using namespace std;

int main() {
  float weight, height;
  float BMI;
  string status;
  
  cout<<"Please enter weight in kilograms: ";
  cin>>weight;
  cout<<"Please enter height in meters: ";
  cin>>height;
  
  BMI = weight / (height * height);
  BMI = int((BMI * 100) + 0.5);
  BMI = (float)BMI / 100;
  
  if (BMI < 18.5)
    status = "Underweight";
  else if (BMI >= 18.5 && BMI <= 24.9)
    status = "Normal";
  else if (BMI >= 25.0 && BMI <= 29.9)
    status = "Overweight";
  else
    status = "Obese";
    
  cout<<"BMI is: "<<BMI<<", Status is "<<status;
  
  return 0;
}
