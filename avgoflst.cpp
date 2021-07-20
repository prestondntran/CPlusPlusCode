/* This program takes an array of integers as an input and returns the average of these integers. */

using namespace std;

float avgoflst(int lst[], int size) {
  float average;
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += lst[i];
  }
  average = sum / size
  return average;
}
