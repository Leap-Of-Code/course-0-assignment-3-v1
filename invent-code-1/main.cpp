#include <iostream>
#include <string>
using namespace std;

int main() {
  int number_1;
  int number_2;
  cout << "Please enter an interger: ";
  cin >> number_1;
  cout << "Please enter another integer: ";
  cin >> number_2;

  const int num_sum = number_1 + number_2;
  const int num_product = number_1 * number_2;
  const int num_quotient = number_1 / number_2;
  const int num_difference = number_1 - number_2;

  cout << "The sum is " << num_sum << ", the product is " << num_product << ", the quotient is " << num_quotient << ", and the difference is ";
  cout << num_difference << " between these two numbers." << endl;

  // Write code here.
}
