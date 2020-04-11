#include <iostream>
#include <string>
using namespace std;

int main() {
  // Write code here.
  float number_1;
  float number_2;
  string operation;
  float answer = 0;
  cout << "Please enter first integer" << " " << endl;
  cin >> number_1;
  cout << "Please enter sign of operation" << " " << endl;
  cin >> operation; 
  if (operation != "/" && operation != "-" && operation != "*" && operation != "+" ) 
  {cout << "Please enter a valid sign of operation" << endl;
  cout << "Please enter sign of operation" << " " << endl;
  cin >> operation; 
  }
  cout << "Please enter second integer" << " "<< endl;
  cin >> number_2;
  
  if (operation == "*") {
    answer = number_1*number_2;
  } 
  else if (operation == "/") {
    answer = number_1/number_2;
  }
  else if (operation == "+") {
    answer = number_1+number_2;
  }
  else if (operation == "-") {
    answer = number_1-number_2;
  }
 if (operation == "/" && number_2 == 0) {cout << "Indivisible";
 } 
 else (cout << "answer is " << answer );
}