#include <iostream>
#include <memory>

#include "dog.h"

int main(){

  /*
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
  */

  /*
  // Shared pointers with custom types
  {
    std::shared_ptr<Dog> dog_ptr_1{new Dog("Dog1")};
    dog_ptr_1->print_info();

    std::cout << "Use count: " << dog_ptr_1.use_count() << '\n';

    std::shared_ptr<Dog> dog_ptr_2 = dog_ptr_1; // Use count: 2

    std::cout << "Use count for dog_ptr_1: " << dog_ptr_1.use_count() << '\n';
    std::cout << "Use count for dog_ptr_2: " << dog_ptr_2.use_count() << '\n';

    // Initializing
    std::cout << '\n';
    std::cout << "Initializing...\n";
    std::shared_ptr<Dog> dog_ptr_3;
    dog_ptr_3 = dog_ptr_1; // Use count: 3

    std::shared_ptr<Dog> dog_ptr_4{nullptr};
    dog_ptr_4 = dog_ptr_1; // Use count 4

    std::shared_ptr<Dog> dog_ptr_5{dog_ptr_1}; // Use count: 5

    std::cout << '\n';

    std::cout << "Use count for dog_ptr_1: " << dog_ptr_1.use_count() << '\n';
    std::cout << "Use count for dog_ptr_2: " << dog_ptr_2.use_count() << '\n';
    std::cout << "Use count for dog_ptr_3: " << dog_ptr_3.use_count() << '\n';
    std::cout << "Use count for dog_ptr_4: " << dog_ptr_4.use_count() << '\n';
    std::cout << "Use count for dog_ptr_5: " << dog_ptr_5.use_count() << '\n';

    // Can also initialize from an pre-existing raw pointer
    std::cout << '\n';
    std::cout << "Initiialize from already existing raw pointer\n";

    Dog * dog_ptr_raw = new Dog("Ralso");

    std::shared_ptr<Dog> dog_ptr_6 {dog_ptr_raw};
    dog_ptr_raw = nullptr;
    dog_ptr_6->print_info();
    std::cout << "Use count for dog_ptr_6 is: " << dog_ptr_6.use_count() << '\n';

    // Reset: decrements the use count and sets the pointer to nullptr
    std::cout << '\n';
    std::cout << "Resetting dog_ptr_5...\n";
    dog_ptr_5.reset();
    std::cout << "Use count for dog_ptr_1: " << dog_ptr_1.use_count() << '\n';
    std::cout << "Use count for dog_ptr_2: " << dog_ptr_2.use_count() << '\n';
    std::cout << "Use count for dog_ptr_3: " << dog_ptr_3.use_count() << '\n';
    std::cout << "Use count for dog_ptr_4: " << dog_ptr_4.use_count() << '\n';
    std::cout << "Use count for dog_ptr_5: " << dog_ptr_5.use_count() << '\n';

    // Can get the raw pointer address and use the ptr in if statements
    std::cout << '\n';
    std::cout << "Casting to bool and using in if statements...\n";
    std::cout << "dog_ptr_4: " << dog_ptr_4 << '\n';
    std::cout << "dog_ptr_4.get(): " << dog_ptr_4.get() << '\n';
    std::cout << "dog_ptr_4-bool:" << static_cast<bool>(dog_ptr_4) << '\n';
    std::cout << "dog_ptr_5-bool:" << static_cast<bool>(dog_ptr_5) << '\n';

    if(dog_ptr_5){
      std::cout << "dog_ptr_5 points to something valid\n";
    } else {
      std::cout << "dog_ptr_5 points to nullptr\n";
    }

  }
  */

  // make_shared
  {
    std::shared_ptr<int> int_ptr_6 = std::make_shared<int>(55);
    std::cout << "The value pointed to by int_ptr_6 is: " << *int_ptr_6 << '\n';

    std::shared_ptr<Dog> dog_ptr_6 = std::make_shared<Dog>("Salz");

    
    // Share the object with other shared_ptr's
    std::cout << '\n';
    std::cout << "Share the object(data) with other shared_ptr's" << '\n';
    std::shared_ptr<int> int_ptr_7 {nullptr};
    int_ptr_7 = int_ptr_6;

    std::shared_ptr<Dog> dog_ptr_7 {nullptr};
    dog_ptr_7 = dog_ptr_6;

    std::cout << "int_ptr_6 use count: " << int_ptr_6.use_count() << '\n';
    std::cout << "dog_ptr_6 use count: " << dog_ptr_6.use_count() << '\n';

    std::cout << '\n';
    std::cout << "Reset ptr6's" << '\n';
    int_ptr_6.reset();
    dog_ptr_6.reset();

    std::cout << "int_ptr_6 use count: " << int_ptr_6.use_count() << '\n';
    std::cout << "dog_ptr_6 use count: " << dog_ptr_6.use_count() << '\n';
    std::cout << "int_ptr_7 use count: " << int_ptr_7.use_count() << '\n';
    std::cout << "dog_ptr_7 use count: " << dog_ptr_7.use_count() << '\n';

  }


  return 0;
}
