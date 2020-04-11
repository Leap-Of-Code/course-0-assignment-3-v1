#include <iostream>
#include <string>
using namespace std;

int main() {
  int original;
  float original_float;
  original_float = 13.5;
  cout << "Please enter a integer: ";
  cin >> original;
  const int clone = original + 14;
  const int product = original * clone;
  cout << "The product is: " << product;
}

/*
Type   | Name     | Value   | Size
------ | -------- | ------- | ------
Int|Original|87|4
Float|Original_Float|13.5|4
const int|clone|101|4
const int|product|8787|4
*/
