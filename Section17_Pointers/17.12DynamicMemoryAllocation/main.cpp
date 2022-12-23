#include <iostream>

int main(){

  /*
  // How we have used pointers so far:
  int number{22};  // Stack
  int* p_number{&number};

  std::cout << '\n';
  std::cout << "Declaring poniter and assigning address:\n";
  std::cout << "number: " << number << '\n';
  std::cout << "p_number: " << p_number << '\n';
  std::cout << "&number: " << &number << '\n';
  std::cout << "*p_number: " << *p_number << '\n';
  std::cout << "&p_number: " << &p_number << '\n';

  int* p_number1;  // uninitialized pointer, contains junk address
  int number1 {12};
  p_number1 = &number1;  // point it to valid address
  std::cout << '\n';
  std::cout << "Uninitialized pointer:\n";
  std::cout << "*p_number1: " << *p_number1 << '\n';
  */

  /*
  // BAD
  // Writing into uninitialized pointer through dereferencing
  int* p_number2;  // Contains junk address
  std::cout << "Writing in the 55" << '\n';;
  *p_number2 = 55; // Writing to junk address - BAD, CRASH here!

  std::cout << '\n';
  std::cout << "Writing into uninitialized pointer through dereferencing:\n";
  std::cout << "p_number2: " << p_number2 << '\n';
  std::cout << "*p_number2: " << *p_number2 << '\n';
  */

  /*
  // Inititializing pointer to null
  // int *p_number3{nullptr}; // Also works
  int *p_number3{}; // Same as above
  std::cout << "Writing into nullptr\n";
  *p_number3 = 33;  // Writing to the null pointer BAD, CRASH
  std::cout << "Done writing 33" << '\n';

  std::cout << '\n';
  std::cout << "Reading and writing through nullptr:\n";
  std::cout << "p_number3: " << p_number3 << '\n';
  std::cout << "*p_number3: " << *p_number3 << '\n'; // Reading from nullptr - BAD, CRASH
  */

  // Dynamic heap memory

  /*
  int *p_number4{nullptr};
  p_number4 = new int;  // Dynamically allocate space for new int in the heap
                        // System cannot access it; only accessible through our code

  *p_number4 = 77;  // Writes into dynamically allocated memory
  std::cout << '\n';
  std::cout << "Dynamically allocated memory:\n";
  std::cout << "p_number4: " << p_number4 << '\n';
  std::cout << "*p_number4: " << *p_number4 << '\n';

  // Return memory to OS
  delete p_number4;
  
  
  // BAD:
  // std::cout << "Writing to bad memory\n";
  // *p_number4 = 45;
  // std::cout << "Done writing!\n";
  // std::cout << "*p_number4: " << *p_number4 << '\n';
  

  // GOOD:
  p_number4 = nullptr;
  */

  // It is also possible to initialize the pointer with a valid address upon 
  // declaration
  int *p_number5{new int};  // Memory location contains junk value
  int *p_number6{new int(22)};  // Using direct init
  int *p_number7{new int{22}};  // Using uniform init

  std::cout << '\n';
  std::cout << "Initialize the pointer with a valid address upon declaration:\n";
  std::cout << "p_number5: " << p_number5 << '\n';
  std::cout << "*p_number5: " << *p_number5 << '\n';
  std::cout << "p_number6: " << p_number6 << '\n';
  std::cout << "*p_number6: " << *p_number6 << '\n';
  std::cout << "p_number7: " << p_number7 << '\n';
  std::cout << "*p_number7: " << *p_number7 << '\n';

  // Remember to release the memory

  delete p_number5;
  p_number5 = nullptr;
  delete p_number6;
  p_number6 = nullptr;
  delete p_number7;
  p_number7 = nullptr;

  // Can still reuse pointers

  p_number5 = new int(81);
  std::cout << "*p_number5: " << *p_number5 << '\n';

  delete p_number5;
  p_number5 = nullptr;

  // Calling delete twice on a pointe BAD!
  p_number5 = new int(99);
  std::cout << "*p_number5: " << *p_number5 << '\n';

  delete p_number5;
  // delete p_number5;  // CRASH!
  p_number5 = nullptr;

  std::cout << "Reached program end\n";

  return 0;
}
