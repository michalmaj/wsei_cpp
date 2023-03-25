#include <iostream>
using namespace std;
int global = 3;

void function () {
  int function_local = 10;
  cout << "global = " << global << endl;
}
int main() {
  int main_local = 20;
  cout << "global = " << global << endl;
  function();
  return 0;
}