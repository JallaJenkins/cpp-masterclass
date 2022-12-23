#include <iostream>

int main(){
  
  int* p_number{};  // Initialized to nullptr
  // p_number = new int{7};

  /*
  // Verbose nullptr check
  std::cout << '\n';
  std::cout<< "Verbose nullptr check:\n";
  
  if (!(p_number == nullptr)) {
    std::cout << "p_number points to a VALID address: " << p_number << '\n';
    std::cout << "*p_number: " << *p_number << '\n';
  } else {
    std::cout << "p_number points to INVALID address.\n";
  }
  */

  // Shorter nullptr check
  if (p_number) {
    std::cout << "p_number points to a VALID address: " << p_number << '\n';
    std::cout << "*p_number: " << *p_number << '\n';
  } else {
    std::cout << "p_number points to INVALID address.\n";
  }


  delete p_number;
  p_number = nullptr;

  // It is safe to call delete on nullptr

  int *p_number1{};

  delete p_number1;  // This won't cause problems

  return 0;
}
