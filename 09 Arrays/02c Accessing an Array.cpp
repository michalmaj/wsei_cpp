// Array updation
#include <iostream>

using namespace std;

int main() {

  const int size = 5;
  // Initialize array
  int Roll_Number[size] = {100, 101, 102, 103, 104};

  cout << "Values of array before updation: " << endl;
  // Print values of array
  for (int i = 0; i < size; i++) {
    // Accesss elements of array at index i
    cout << Roll_Number[i] << "  ";
  }
  cout << endl;
  // Update values of array element at index 3 and 4
  Roll_Number[3] = 22222;
  Roll_Number[4] = 33333;
  cout << "Values of array after updation: " << endl;
  // Print updated values of  array
  for (int i = 0; i < size; i++) {
    // Access elements of array at index i
    cout << Roll_Number[i] << "  ";
  }
  cout << endl;
}