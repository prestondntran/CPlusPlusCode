/* This program takes an array of integers as an input and returns the maximum of these integers. */

using namespace std;

int maxinlst(int lst[], int size) {
  int max = lst[0];
  for (int i = 1; i < size; i++) {
    if (lst[i] > max) 
      max = lst[i];
  }
}
