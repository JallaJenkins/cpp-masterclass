#include <iostream>

int main(){

  /*
  // Case 1: Uninitialized pointer
  int *p_number;  // Dangling uninitialized pointer

  std::cout << '\n';
  std::cout << "Case 1: Uninitialized pointer:\n";
  std::cout << "p_number: " << p_number << '\n';
  std::cout << "*p_number: " << *p_number << '\n'; // CRASH!
  */

  /*
  // Case 2: Deleted pointer
  std::cout << '\n';
  std::cout << "Case 2: Deleted pointer:\n";
  int *p_number1 {new int{67}};

  std::cout << "*p_number1 (before delete): " << *p_number1 << '\n';

  delete p_number1;

  std::cout << "*p_number1 (after delete): " << *p_number1 << '\n';  // junk value or CRASH
  */

  /*
  // Multiple pointers to same address
  std::cout << '\n';
  std::cout << "Case 3: Multiple pointers to the same address:\n";

  int *p_number3 {new int{83}};
  int *p_number4 {p_number3};

  std::cout << "p_number3 - " << p_number3 << " - " << *p_number3 << '\n';
  std::cout << "p_number4 - " << p_number4 << " - " << *p_number4 << '\n';

  // Deleting p_number3
  delete p_number3;

  // p_number4 now points to deleted memory
  // Deferencing will not be properly defined
  std::cout << "p_number4 (after deleting p_number3) - " << p_number4 << " - ";
  std::cout << *p_number4 << '\n';  // Junk or crash
  */

  /*
  // Solution 1: Initialize pointers immediately upon declaration
  std::cout << '\n';
  std::cout << "Solution 1:\n";
  int *p_number5{nullptr};
  int *p_number6{new int {87}};

  // std::cout << "*p_number6: " << *p_number6 << '\n'; // CRASH if nullptr

  // Check for nullptr before use
  if (p_number6 != nullptr) {
    std::cout << "*p_number6: " << *p_number6 << '\n';
  } else {
    std::cout << "Invalid address\n";
  }
  */

  /*
  // Solution 2: Reset pointer to nullptr after deletion
  std::cout << '\n';
  std::cout << "Solution 2:\n";
  int *p_number7 {new int{82}};

  // Use the pointer however you want
  std::cout << "p_number7 - " << p_number7 << " - " << *p_number7 << '\n';

  delete p_number7;
  p_number7 = nullptr;  // Reset pointer

  // Check for nullptr before use
  if (p_number7 != nullptr) {
    std::cout << "p_number7 - " << p_number7 << " - " << *p_number7 << '\n';
  } else {
    std::cout << "Invalid address\n";
  }
  */

  // Solution 3: Use a master pointer for multiple pointers to same address
  std::cout << '\n';
  std::cout << "Solution 3:\n";
  int *p_number8 {new int{382}};  // Make p_number8 master pointer
  int *p_number9 {p_number8};

  // Dereference the pointers and use them
  std::cout << "p_number8 - " << p_number8 << " - " << *p_number8 << '\n';

  if (p_number8 != nullptr) {  // Check master pointer before using slave pointer
    std::cout << "p_number9 - " << p_number9 << " - " << *p_number9 << '\n';
  }

  delete p_number8;  // Master released the memory
  p_number8 = nullptr;

  if (p_number8 != nullptr) {  // Check master pointer before using slave pointer
    std::cout << "p_number9 - " << p_number9 << " - " << *p_number9 << '\n';
  } else {
    std::cout << "WARNING: Trying to use invalid pointer\n";
  }




  std::cout << "Reached program end.\n";
  

  return 0;
}
