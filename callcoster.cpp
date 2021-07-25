/* This program asks the user for information about their call and returns the cost of the call. */

#include <iostream>
#include <string>
using namespace std;

int main() {
  string day;
  int time;
  int duration;
  float cost;
  
  cout<<"Enter the day the call started at: ";
  cin>>day;
  cout<<"Enter the time the call started at (hhmm): ";
  cin>>time;
  cout<<"Enter the duration of the call (in minutes): ";
  cin>>duration;
  
  if (day != "Sat" && day != "Sun" && time >= 800 && time <= 1800)
    cost = (float)duration * 0.40;
  else if (day == "Sat" || day == "Sun")
    cost = (float)duration * 0.15;
  else
    cost = (float)duration * 0.25;
    
  cout<<"This call will cost $";
  printf("%.2f", cost);
  
  return 0;
}
