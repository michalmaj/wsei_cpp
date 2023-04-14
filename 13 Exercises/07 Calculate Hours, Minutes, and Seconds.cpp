#include <iostream>
using namespace std;

int main() {
// Initialize a variable total_seconds
  int total_seconds = 3870;
// Prints value of total_seconds
  cout << "total_seconds = " << total_seconds << endl;
// Declares variable
  int hours, minutes, seconds;
// Convert seconds in hours and store the output in hours variable
  hours = total_seconds/3600;
  cout << "Time in hours, minutes and seconds = ";
// Prints value of hours
  cout << hours << "h :";
// Store the remaining seconds in total_seconds
  total_seconds = total_seconds % 3600;
// Convert seconds in minutes and store the output in minutes variable
  minutes = total_seconds/60;
// Prints value of minutes
  cout << minutes << "m :";
// Store the remaining seconds in seconds variable
  seconds = total_seconds % 60;
  cout << seconds << "s" << endl;

}