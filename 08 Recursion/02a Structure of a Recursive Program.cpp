// The program given below generates an error.
#include <iostream>

using namespace std;

int ticket_price(int person) {
  int price;
  person--;
  return ticket_price(person);
}

int main() {
  int price;
  price = ticket_price(10);
  cout << "Ticket price = " << price << endl;

}