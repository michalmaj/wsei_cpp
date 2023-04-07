#include <iostream>

using namespace std;

// Iterative factorial function
int factorial(int n) {
  int fact = 1;

  if (n == 0) {
    fact = 1;
  }

  for (int counter = 1; counter <= n; counter++) {
    fact = fact * counter;

  }
  return fact;
}

// main function
int main() {
  int n = 5;
  int result;
  // Call factorial function in main and store the returned value in result
  result = factorial(n);
  // Prints value of result
  cout << "Factorial of " << n << " = " << result << endl;
  return 0;
}