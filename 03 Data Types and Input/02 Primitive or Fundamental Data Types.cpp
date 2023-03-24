#include <iostream>

using namespace std;

int main() {
    // Create variable of different types
    int integer_number = 10;
    float float_number = 10.5;
    /* Stores scientific value. The number after "e" 
    represents the power of 10*/
    float float_scientific = 97e4;
    double double_number = 10.5;


    // Prints value of variables
    cout << "int = " << integer_number << endl;
    cout << "float = " << float_number << endl;
    cout << "float_scientific = " << float_scientific << endl;
    cout << "double = " << double_number << endl;


    char character = 'A';
    bool boolean = true;

    // Prints value of variables
    cout << "char = " << character << endl;
    cout << "bool = " << boolean << endl;

    // Chars and bools are also stored as numbers.
    long a = false; 
    int b = 'C'; 
    cout << "variable a = " << a << endl; 
    cout << "variable b = " << b << endl; 
}