// The program will not compile.
#include <iostream>
using namespace std;

void function () {
  int function_local = 10;
  cout << main_local;
}

int main() {
  int main_local = 20;
  cout << function_local;
  return 0;
}