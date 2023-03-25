#include <iostream>
using namespace std;

// Function definition
int make_juice ( int water = 1 , int fruit = 3){
// Define new  variable juice of int type
  int juice ;
// Adds water in apple and saves the output in juice
  juice = water + fruit;
// Prints text on the screen  
  cout << "Your juice is ready" << endl ;
 // Returns juice value in output 
  return juice;

}


int main() {
  // Declares a variable juice_glass
  int juice_glass; 

  // Calls function make_juice without any actual paramters
  juice_glass = make_juice ( );
  cout << "Number of juice glass = " << juice_glass << endl;
  // Calls function make_juice with only one actual paramters
  juice_glass = make_juice (5);
  cout << "Number of juice glass = " << juice_glass << endl;
    // Calls function make_juice and save its output in juice_glass
  juice_glass = make_juice ( 2 , 5 );
  cout << "Number of juice glass = " << juice_glass << endl;
  
  return 0;
}

