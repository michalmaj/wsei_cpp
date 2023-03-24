#include <iostream>
using namespace std;

int main() {
  
  bool operand1 = 2 > 3; // Will be false
  bool operand2 = true;
  cout << "Values of operands are:";
  
  cout << "operand1 = " << operand1 << " , operand2 = " << operand2 << endl;
  cout << "operand1 && operand2 = " << (operand1 && operand2) << endl;
  cout << "operand1 || operand2 = " << (operand1 || operand2) << endl;
  cout << "!operand1 = " << (!operand1) << endl;
  cout << "!operand2 = " << (!operand2) << endl;
  
  return 0;
}