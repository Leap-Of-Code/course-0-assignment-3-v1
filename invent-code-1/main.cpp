#include <iostream>
#include <string>
using namespace std;

int main() {
  int input_1;
  int input_2;
  int sum = 0;
  float quotient = 0;
  int product = 0;
  int difference = 0;

  cout << "Integer #1: ";
  cin >> input_1;
  cout << "Integer #2: ";
  cin >> input_2;

  sum = input_1 + input_2;
  quotient = input_1 / (input_2 * 1.0);
  product = input_1 * input_2;
  difference = input_1 - input_2;

  cout << "Sum: " << sum << endl;
  cout << "Quotient: " << quotient << endl;
  cout << "Product: " << product << endl;
  cout << "Difference: " << difference << endl;
  
}
