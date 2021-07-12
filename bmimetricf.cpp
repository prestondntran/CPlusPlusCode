/* This program has a function that takes weight and height as inputs and calculates the BMI. */

using namespace std;

float bmimetricf(int weight, float height) {
  float BMI;
  BMI = weight / (height * height);
  return BMI;
}
