#include <iostream>
#include <string>
using namespace std;

int main() {      
  
  std::cout << "Enter a number ";   
  long long first_number = 2147483647; 
  std::cin >> first_number; 
  
  
  
  std::cout << "Enter the second number\n"; 
  long long second_number = 200; 
  std::cin >> second_number;   
  
  std::cout << first_number + second_number; 
                                  

  
  long long sumof_bothnumbers;  
    std::cin >> first_number >> second_number; 
    
   sumof_bothnumbers = first_number + second_number; 
    std::cout << first_number << " + " <<  second_number << " = " << sumof_bothnumbers;    
    
    return 0;

}

    
