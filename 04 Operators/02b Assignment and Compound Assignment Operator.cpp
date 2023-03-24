#include <iostream>
using namespace std;

int main() {
  // your code goes here
  int operand1 = 50;
  int operand2 = 26;
  cout << "Before using compound assignment operator:" << endl;
  cout << "operand1 = " << operand1 << endl;
  operand1 += operand2;
  cout << "After using compound assignment operator:" << endl;
  cout << "operand1 += operand2 = " << operand1 << endl;
  
  return 0;
}