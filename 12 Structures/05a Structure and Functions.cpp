#include <iostream>

using namespace std;

// Student structure
struct Student {
  string name;
  int roll_number;
  int marks;
};
// printStudent function
void printStudent(Student s) {
  cout << "Student information" << endl;
  cout << "Name = " << s.name << endl;
  cout << "Roll Number = " << s.roll_number << endl;
  cout << "Marks = " << s.marks << endl;
}
// main function
int main() {
  struct Student s[100];

  s[0] = { "John", 1 , 50 };
  printStudent(s[0]);

  s[1] = { "Alice", 2 , 43 };
  printStudent(s[1]);

  return 0;
}