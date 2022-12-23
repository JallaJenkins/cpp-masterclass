#include <iostream>

int main(){

  double first_number {5.2};
  double second_number {33.1};
  char c{'x'};
  
  switch(c){
      case '+':
      std::cout << first_number << " + " << second_number << " = " 
              << first_number + second_number << std::endl;
      break;
      
      case '-':
      std::cout << first_number << " - " << second_number << " = " 
              << first_number - second_number << std::endl;
      break;
      
      case 'x':
      std::cout << first_number << " * " << second_number << " = " 
              << first_number * second_number << std::endl;
      break;
      
      case '/':
      std::cout << first_number << " / " << second_number << " = " 
              << first_number / second_number << std::endl;
      break;
  
  }

  return 0;
}
