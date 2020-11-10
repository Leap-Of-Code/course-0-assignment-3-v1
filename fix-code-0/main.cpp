#include <iostream>
#include <string>
using namespace std;

int main() {
  const string name = "Jimmy";
  const string school_name = "Big City High School";

  const unsigned int age = 20;
  const float gpa = 3.7;

  cout << name << " is " << age << " and attends the " << school_name << ". they currently have a gpa of " << gpa;
}
