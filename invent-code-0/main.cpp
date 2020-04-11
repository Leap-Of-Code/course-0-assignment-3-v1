#include <iostream>
#include <string>
using namespace std;

int main() {
  int original;
  cout << "Please enter a integer: ";
  cin >> original;
  const int clone = original + 14;
  const int product = original * clone;
  cout << "The product is: " << product;
}

/*
Type   | Name     | Value   | Size
------ | -------- | ------- | ------
       |          |         |
  int   original    87.31     4
  int   clone        101     4
  int   product      8787     4

*/
