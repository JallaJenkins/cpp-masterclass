#include <iostream>

int main(){
  /*
  // A raw variable that can be modified
  std::cout << '\n';
  std::cout << "Raw variable that can be modified:\n";

  int number{5}; // Not constant
  std::cout << "number: " << number << '\n';
  std::cout << "&number: " << &number << '\n';

  // Modify
  number = 12;
  number += 7;

  // Access - print out
  std::cout << "number: " << number << '\n';
  std::cout << "&number: " << &number << '\n';
  std::cout << '\n';
  */

  /*
  // Pointer: can modify pointer and underlying data
  int *p_number1 {nullptr};
  int number1 {23};

  p_number1 = &number1;
  std::cout << "Pointer and value pointed to are both modifiable:\n";
  std::cout << "p_number1: " << p_number1 << '\n';  // Address
  std::cout << "*p_number1: " << *p_number1 << '\n'; // 23
  std::cout << "number1: " << number1 << '\n'; // 23

  // Change value pointed to by pointer
  std::cout << '\n';
  std::cout << "Modifying the value pointed to through the pointer:\n";
  *p_number1 = 432;
  std::cout << "p_number1: " << p_number1 << '\n';
  std::cout << "*p_number1: " << *p_number1 << '\n';

  // Change the pointer to point somwhere else
  std::cout << '\n';
  std::cout << "Changing the pointer itself to make it point somewhere else:\n";
  int number2{56};
  p_number1 = &number2;
  std::cout << "p_number1: " << p_number1 << '\n';
  std::cout << "*p_number1: " << *p_number1 << '\n';
  std::cout << "number1: " << number1 << '\n';
  std::cout << "number2: " << number2 << '\n';
  std::cout << '\n';
  */

  /*
  //Pointer to const
  //You cannot modify the data through the pointer
  std::cout << "Pointer is modifiable, value pointed to cannot be modified through the pointer: \n" ;
  int number3{632}; // If you want this variable to be const, should be explicit
  const int* p_number3{&number3};
  std::cout << "p_number3: " << p_number3 << '\n';
  std::cout << "*p_number3: " << *p_number3 << '\n';
  std::cout << '\n';

  std::cout << "Modifying the value through the pointer leads to compiler error\n";
  // *p_number3 = 444;

  // We can still change where the pointer is pointing to
  std::cout << '\n';
  std::cout << "Changing the address pointed to by the pointer:\n";
  int number4{872};
  p_number3 = &number4;

  std::cout << "p_number3: " << p_number3 << '\n';
  std::cout << "*p_number3: " << *p_number3 << '\n';
  std::cout << '\n';
  */

  /*
  // const keyword applied to variable name
  std::cout << "const keyword applied to variable name:\n";
  int protected_var {10};  // Can make this variable const if we want to protect it 
                           // directly

  const int* p_protected_var {&protected_var};

  // *p_protected_var = 55;
  protected_var = 66;
  std::cout << "protected_var: " << protected_var << '\n';
  std::cout << "p_protected_var: " << p_protected_var << '\n';
  std::cout << "*p_protected_var: " << *p_protected_var << '\n';
  std::cout << '\n';

  // You cannot set up a pointer to a const variable unless it is a pointer to const
  const int some_data{55};
  // int *p_some_data {&some_data};  // Compiler error
  // *p_some_data = 66;
  */

  /*
  // Both pointer and value pointed to are const
  const int number5{459};
  const int* const p_number5{&number5};
  std::cout << "Pointer is constant, value pointed to is constant:\n";
  std::cout << "p_number5: " << p_number5 << '\n';
  std::cout << "*p_number5: " << *p_number5 << '\n';

  // Cannot modify the value pointed  to through the pointer
  std::cout << "Changing value pointed to by p_number5 through the pointer - compiler error\n";
  // *p_number5 = 222; // Compiler error

  // Cannot change where pointer points to
  std::cout << "Changing where the pointer p_number5 points to - compiler error\n";
  int number6{333};
  // p_number5 = &number6; // Compiler error

  std::cout << '\n';
  */

  // Pointer is constant but value pointed to can change
  std::cout << "Pointer is constant but value pointed to can change:\n";
  int number7{982};
  int * const p_number7{&number7};
  std::cout << "p_number7: " << p_number7 << '\n';
  std::cout << "*p_number7: " << *p_number7 << '\n';

  std::cout << "Changing value pointed to through p_number7:\n";
  *p_number7 = 456;
  std::cout << "the value that p_number7 now points to is: " << *p_number7 << '\n';

  int number8{2928};
  std::cout << "Changing the address where p_number7 points - compiler error\n";
  // p_number7 = &number8; // Compiler error


  return 0;
}
