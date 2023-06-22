#include <iostream>
#include <memory>

#include "dog.h"

int main(){

  // Shared pointers to fundamental types
  {
    
    std::shared_ptr<int> int_ptr_1 {new int(20)};

    std::cout << "The pointed to value is: " << *int_ptr_1 << '\n';
    *int_ptr_1 = 40;
    std::cout << "The pointed to value is: " << *int_ptr_1 << '\n';
    std::cout << "Use count: " << int_ptr_1.use_count() << '\n';

    std::cout << "-----------------\n";

    // Copying

    std::shared_ptr<int> int_ptr_2 = int_ptr_1;  // Use count = 2

    std::cout << "The pointed to value though int_ptr_2 is: " << *int_ptr_2 << '\n';
    *int_ptr_2 = 70;
    std::cout << "The pointed to value though int_ptr_2 is: " << *int_ptr_2 << '\n';

    std::cout << "Use count for int_ptr_1: " << int_ptr_1.use_count() << '\n';
    std::cout << "Use count for int_ptr_2: " << int_ptr_2.use_count() << '\n';
    
    std::cout << "-----------------\n";

    // Other ways to initialize shared pointers

    std::shared_ptr<int> int_ptr_3;  // init to nullptr
    int_ptr_3 = int_ptr_1;  // Use count = 3

    std::shared_ptr<int> int_ptr_4{nullptr};
    int_ptr_4 = int_ptr_1;  // Use count = 4

    std::shared_ptr<int> int_ptr_5{int_ptr_1};  // Use count 5

    std::cout << "The value pointed to through int_ptr_5 is: " << *int_ptr_5 << '\n';
    *int_ptr_5 = 100;
    std::cout << "The value pointed to through int_ptr_5 is: " << *int_ptr_5 << '\n';

    std::cout << "The use count for int_ptr_1 is: " << int_ptr_1.use_count() << '\n';
    std::cout << "The use count for int_ptr_2 is: " << int_ptr_2.use_count() << '\n';
    std::cout << "The use count for int_ptr_3 is: " << int_ptr_3.use_count() << '\n';
    std::cout << "The use count for int_ptr_4 is: " << int_ptr_4.use_count() << '\n';
    std::cout << "The use count for int_ptr_5 is: " << int_ptr_5.use_count() << '\n';

    std::cout << "-----------------\n";

    // Use a shared pointer to manage an already existing piece of memory


    std::cout << "Use a shared pointer to manage an already existing piece of memory\n";
    int* int_ptr_raw = new int(33) ;

    std::shared_ptr<int> int_ptr_6 {int_ptr_raw};
    int_ptr_raw = nullptr;
    std::cout << "The value pointed to through int_ptr_6 is: " << *int_ptr_6 << '\n';
    std::cout << "The use count for int_ptr_6 is: " << int_ptr_6.use_count() << '\n';
    std::cout << "raw pointer: " << int_ptr_raw << '\n';
    std::cout << "int_ptr_6.get(): " << int_ptr_6.get() << '\n';;

    std::cout << "-----------------\n";

    // Reset: decrements the use count and sets the pointer to nullptr
    std::cout << "Reset...\n";
    int_ptr_5.reset(); // sets int_ptr_5 to null_ptr and decreases count
    std::cout << "The use count for int_ptr_1 is: " << int_ptr_1.use_count() << '\n';
    std::cout << "The use count for int_ptr_2 is: " << int_ptr_2.use_count() << '\n';
    std::cout << "The use count for int_ptr_3 is: " << int_ptr_3.use_count() << '\n';
    std::cout << "The use count for int_ptr_4 is: " << int_ptr_4.use_count() << '\n';
    std::cout << "The use count for int_ptr_5 is: " << int_ptr_5.use_count() << '\n';
    std::cout << "int_ptr_5.get(): " << int_ptr_5.get() << '\n';

    std::cout << "-----------------\n";

    // Can get the raw pointer address and use the ptr in if statements (casts to bool)
    std::cout << "Casting to bool and using in if statments...\n";
    std::cout << "int_ptr_4: " << int_ptr_4 << '\n';
    std::cout << "int_ptr_4.get(): " << int_ptr_4.get() << '\n';
    std::cout << std::boolalpha;
    std::cout << "int_ptr_4->bool: " << static_cast<bool>(int_ptr_4) << '\n';
    std::cout << "int_ptr_5->bool: " << static_cast<bool>(int_ptr_5) << '\n';

    if(int_ptr_4) {
      std::cout << "int_ptr_4 pointing to something valid\n";
    } else {
      std::cout << "int_ptr_4 pointing to nullptr\n";
    }

    std::cout << "-----------------\n";

    std::cout << "Resetting pointers...\n";
    int_ptr_4.reset();
    int_ptr_3.reset();
    int_ptr_2.reset();
    int_ptr_1.reset();
    std::cout << "The use count for int_ptr_1 is: " << int_ptr_1.use_count() << '\n';
    std::cout << "The use count for int_ptr_2 is: " << int_ptr_2.use_count() << '\n';
    std::cout << "The use count for int_ptr_3 is: " << int_ptr_3.use_count() << '\n';
    std::cout << "The use count for int_ptr_4 is: " << int_ptr_4.use_count() << '\n';
    std::cout << "The use count for int_ptr_5 is: " << int_ptr_5.use_count() << '\n';
  }




  return 0;
}
