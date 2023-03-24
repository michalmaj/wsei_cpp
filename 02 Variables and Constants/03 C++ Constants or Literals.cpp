// Constants or Literals
#include <iostream>

using namespace std;

int main() {
    int number = 10;
    cout << "Number = " << number << endl;
    number = 20;
    cout << "Number = " << number << endl;
    number = 30;
    cout << "Number = " << number << endl;

    const int number1 = 10;
    cout << "Number = " << number1 << endl;
    // Uncommenting the following line will result in a compiler error
    // number1 = 20;
}