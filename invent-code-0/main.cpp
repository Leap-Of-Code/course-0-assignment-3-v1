#include <iostream>
#include <string>
using namespace std;

int main() {
   int original;
  const float original_float= 13.5;
  cout << "Please enter a integer: ";
  cin >> original;
  int clone = original + 14;
  int product = original * clone;
  cout << "Type" << "    |    Name    "  << "    |  Value" << "     |  Size" << endl;
  cout << "Integer" << " |   original     |    " <<   original << "     | 4 bytes" <<endl;
  cout << "Float" << "   | original_float |    " <<   original_float << "    | 4 bytes" << endl;
  cout << "Integer" << " |    clone       |    " <<   clone << "     | 4 bytes" <<endl;
  cout << "Integer" << " |    product     |    " <<   product << "  | 4 bytes" <<endl;
}

/*
Type   | Name     | Value   | Size
------ | -------- | ------- | ------
       |          |         |
*/
