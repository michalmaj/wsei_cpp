#include <iostream>
using namespace std;

int main() {
  
  int int_operand1 = 50;
  int int_operand2 = 26;
  cout << " operand1 = " << int_operand1 << " , operand2 = " << int_operand2 << endl;
  cout << " Is operand1 less than operand2? " << (int_operand1 < int_operand2) << endl;
  cout << " Is operand1 less than or equal to operand2? " << (int_operand1 <= int_operand2 )<< endl;
  cout << " Is operand1 greater than operand2? " << (int_operand1 > int_operand2) << endl;
  cout << " Is operand1 greater than or equal to operand2? " << (int_operand1 >= int_operand2) << endl;
  cout << " Is operand1 equal to operand2? " << (int_operand1 == int_operand2) << endl;
  cout << " Is operand1 not equal to operand2? " << (int_operand1 != int_operand2) << endl;


  string str_operand1 = "Microsoft";
  string str_operand2 = "Samsung"; 
  cout << " Is operand1 greater than operand2? " << (str_operand1 > str_operand2) << endl;
    
  return 0;
}