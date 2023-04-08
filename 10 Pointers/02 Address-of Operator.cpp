#include <iostream>

using namespace std;

int main() {
  // Declare a variable John
  int John = 10;
  // Prints the memory address in which value of John is stored
  cout << "John Address = " << &John << endl;
  // Prints the value of John
  cout << "John Value = " << John << endl;
  return 0;
}