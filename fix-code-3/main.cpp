#include <iostream>
#include <string>
using namespace std;

int main() {
  const unsigned int jim_age = 32;
  const unsigned int daphny_age = 28;
  const unsigned int age_difference = jim_age - daphny_age;
  cout << "Daphny is " << age_difference << " years younger than Jim.";
}
