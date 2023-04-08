#include <iostream>
using namespace std;

int main() {
  // Declare pointer ptr
  int * ptr = nullptr;
  // Store the starting address of dynamically reserved 4 bytes in ptr
  ptr = new int;
  // Store 100 in dynamic space
  *ptr = 100;
  // Print value pointed by ptr
  cout << *ptr << endl;
  // Free the space pointed by pointer ptr
  delete ptr;
  return 0;
}