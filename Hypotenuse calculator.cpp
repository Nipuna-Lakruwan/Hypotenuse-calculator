#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  // Declare variables to store the lengths of sides A, B, and C
  double a;
  double b;
  double c;

  // Prompt user to enter the length of side A
  cout << " Enter Side A: ";
  cin >> a;

  // Prompt user to enter the length of side B
  cout << "Enter Side B: ";
  cin >> b;

  // Calculate the length of side C using the Pythagorean theorem
  c = sqrt(pow(a, 2) + pow(b, 2));

  // Display the calculated length of side C
  cout << "Side C: " << c << endl;

  // Return 0 to indicate successful execution
  return 0;
}
