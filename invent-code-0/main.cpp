#include <iostream>
#include <string>
using namespace std;

int main() {
  float original;
  float original_float;
  original_float = 13.5;
  cout << "Please enter a number: ";
  cin >> original;
  float clone = original + 14;
  float product = original * clone;
  cout << "The product is: " << product;
}

/*
Type   | Name          | Value            | Size
------ | --------      | -------          | ------
  int  | original      | cin              | 4 bytes
  float| original float| 13.5             | 4 bytes
  float| clone         | cin + 14         | 4 bytes
  float| product       | cin * (cin + 14) | 4 bytes 
*/
