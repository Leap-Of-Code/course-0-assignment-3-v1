#include <iostream>
#include <string>
using namespace std;

int main() {
  // Write code here.
  int interger1;
  int interger2;

  cout << "Write two intergers to compute :" << endl;
  cin >> interger1;
  cout << "and ";
  cin >> interger2;

  int product = interger1 * interger2;
  int sum = interger1 + interger2;
  int quotient = interger1 / interger2;
  int difference = interger1 - interger2;

  cout << "The sum is " << sum << endl;
  cout << "The product is " << product << endl;
  cout << "The quotient is " << quotient << endl;
  cout << "The difference is " << difference << endl;
}
