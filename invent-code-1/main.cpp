#include <iostream>
#include <string>
using namespace std;

int main() {
int number1; 
int number2;
cout << "please enter integer #1: " << endl; 
cin >> number1;
cout << "please enter integer #2: " << endl;
cin >> number2;

int sum = number1 + number2;
int product = number1 * number2;
float quotient = number1 / number2;
int difference = number1 - number2;

cout << "Sum of the 2 numbers: " << sum << endl; 
cout << "Product of the 2 numbers: " << product << endl;
cout << "Quotient of the 2 numbers: " << quotient << endl;
cout << "Difference between the 2 numbers: " << difference << endl; 

}
