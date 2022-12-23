#include <iostream>

int main(){

  std::cout << "Enter your age: ";
  int age;
  std::cin >> age;

  if (age >= 21 && age <= 39){
    std::cout << "You are elgible for treatment!\n";
  } else if (age < 21){
    std::cout << "Sorry you are too young for treatment!\n";
  } else {
    std::cout << "Sorry you are too old for treatment!\n";
  }

  return 0;
}
