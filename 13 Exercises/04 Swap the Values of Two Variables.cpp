#include <iostream>

using namespace std;

int main() {
  // Initialize variables var1, var2 and temp
  int var1 = 10;
  int var2 = 20;
  int temp;
  // Print the values of var1 and var2
  cout << "Initial values of var1 and var2 are:" << endl;
  cout << "var1 = " << var1 << endl;
  cout << "var2 = " << var2 << endl;

  // Stores value of var1 in temp
  temp = var1;
  // Stores value of var2 in var1
  var1 = var2;
  // Stores value of temp in var2
  var2 = temp;

  cout << "After swapping:" << endl;
  cout << "var1 = " << var1 << endl;
  cout << "var2 = " << var2 << endl;

}