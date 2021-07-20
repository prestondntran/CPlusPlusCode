/* This program takes an array of integers as an input and returns the maximum absolute value. */

using namespace std;

int maxabsinlst(int lst[], int size) {
  int max = lst[0];
  for (int i = 1; i < size; i++) {
    if (lst[i] < 0)
      lst[i] *= -1;
    
    if (lst[i] > max) 
      max = lst[i];
  }
  return max;
}
