#include <iostream>
#include <string>
using namespace std;

int main() {
  // Write code here.
  int int_one;
  int int_two;

  cout << "Enter value for integer 1: " << endl;
  cin >> int_one;

  cout << "Enter value for integer 2: " << endl;
  cin >> int_two;

  cout << "Product is: ";
  const int product = int_one * int_two;
  cout << product << endl; 

  cout << "Sum is: " << endl;
  const int sum = int_one + int_two;
  cout << sum << endl;

  cout << "Quotient is for int_one / int_two: " << endl;
  const int division = int_one / int_two;
  cout << division << endl;

  cout << "Difference is of int_one - int_two: " << endl;
  const int difference = int_one - int_two;
  cout << difference << endl;

}
