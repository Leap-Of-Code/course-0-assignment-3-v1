#include <iostream>
#include <string>
using namespace std;

int main() {
  int original;
  float original_float;
  original_float = 13.5;
  cout << "Please enter a number: ";
  cin >> original;
  int clone = original + 14;
  int product = original * clone;
  cout << "The product is: " << product;
}

/*
Type   | Name     | Value   | Size
------ | -------- | ------- | ------
       |          |         |
*/
