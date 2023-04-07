#include <iostream>

using namespace std;

int ticket_price(int person) {
  int price;
  cout << "person: " << person << endl;
  if (person == 1) {
    price = 100;
    return price;
  } 
  else
    person--;
  return ticket_price(person);
}

int main() {
  int price;
  price = ticket_price(15);
  cout << "Ticket price = " << price << endl;

}