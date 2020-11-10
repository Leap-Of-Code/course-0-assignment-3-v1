#include <iostream>
#include <string>
using namespace std;

int main() {
  const unsigned short int jim_age = 32;
  const unsigned short int daphny_age = 28;
  unsigned short int age_difference = jim_age - daphny_age;

  cout << "Daphny is " << age_difference << " years older then Jim.";
  
}
