#include <iostream>
using namespace std;

int main() {
  
  // Example program with bitwise operators
  int operand1 = 3;
  int operand2 = 2;
  cout << "operand1 = " << operand1 << " , operand2 = " << operand2 << endl;
  cout << "operand1 & operand2 = " << (operand1 & operand2) << endl;
  cout << "operand1 | operand2 = " << (operand1 | operand2 )<< endl;
  cout << "operand1 ^ operand2 = " << (operand1 ^ operand2) << endl;


  // Example program with left and right shift bitwise operators 
  operand1 = 2;
  operand2 = 1;

  cout << "operand1 >> operand2 = " << (operand1 >> operand2) << endl;
  cout << "operand1 << operand2 = " << (operand1 << operand2) << endl;

  // Operator ~
  int operand = 5; 
  cout << "2's complement of " << operand << " = " << ~operand + 1 << endl; 
  
  return 0;
}