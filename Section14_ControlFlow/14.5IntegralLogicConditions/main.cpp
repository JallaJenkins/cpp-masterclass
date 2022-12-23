#include <iostream>

int main(){

  int condition{-3};
  bool bool_condition = condition;
  
  std::cout << std::boolalpha;

  if(bool_condition){
    std::cout << "We have a " << bool_condition << " in our variable\n";
  
  } else {
    std::cout << "We have " << bool_condition << " in our variable\n";
  }

  return 0;
}
