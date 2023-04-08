#include <iostream>

using namespace std;

// Student structure
struct Student {
  string name;
  int roll_number;
  int marks;
};

// main function
int main() {
  // Declare structure variable
  Student s1;
  // Declare structure pointer
  Student *ptrs1;
  // Store address of structure variable in structure pointer
  ptrs1 = &s1;
  return 0;
}