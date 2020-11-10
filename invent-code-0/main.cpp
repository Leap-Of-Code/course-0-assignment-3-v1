#include <iostream>
#include <string>
using namespace std;

int main() {
  int original;
  cout << "Please enter a integer: ";
  cin >> original;
  int clone = original + 14;
  int product = original * clone;
  cout << "The product is: " << product;
}

/*
Type   | Name     | Value   | Size
------ | -------- | ------- | ------
int   |   original     |    ?     | 4
float | original_float     | 13.5.   | 4
int | clone     | ? + 14   | 4
int | product    | ?(? + 14)   | 4
*/
