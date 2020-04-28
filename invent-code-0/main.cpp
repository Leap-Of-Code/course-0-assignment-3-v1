#include <iostream>
#include <string>
using namespace std;

int main() {
  int original;
  float original_float;
  original_float = 13.5;
  cout << "Please enter a integer: ";
  cin >> original;
  int clone = original + 14;
  int product = original * clone;
  cout << "The product is: " << product;
}

/*
Type   | Name     | Value   | Size
------ | -------- | ------- | ------
int                         | 4
         original    87.31    4
float.   orignal_float 13.5.  4         
int      clone       27.5     4
int      product    2,401.025 4


*/