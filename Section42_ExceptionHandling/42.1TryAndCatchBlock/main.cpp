#include <iostream>
#include <memory>

class Item{
public:
  Item() {
    std::cout << "Item constructor called\n";
  }

  ~Item() {
    std::cout << "Item destructor called\n";
  }
};

class MyException{
public:
  MyException() = default;
  // MyException(const MyException& ex) = delete;  // Will cause errors

// private:
// protected:
public:
  MyException(const MyException& ex) {} // Will cause errors 
};

int main(){

  /*
  // Showing that automatic local variables are destroyed when thrown

  int a{10};
  // int b{0};
  int b{10};

  try{
    Item item;  // When exception is thrown, control immediately exits try block
                // Automatic local variables are released
                // Pointers may leak memory
    
    if (b == 0) // Try block exited; item destroyed
      throw 0;  // 0 thrown in block, then destroyed
    a++;  // Arbitrary statements
    b++;
    std::cout << "Code execution was fine\n";

  } catch (int ex) {  // ex is a copy of what was thrown
    std::cout << "Exception thrown: " << ex << '\n';
  }
  */

  /*
  // Throwing pointers - NOT RECOMMENDED
  int c{0};
  try{
    int var{55};
    int* int_ptr = &var;
    if(c == 0)
      throw int_ptr;  // PROBLEM - pointer will point to expired var in catch block
    std::cout << "Code is fine\n";
    
  } catch (int* ex) { // ex will give undefined behaviour - unreliable
    std::cout << "Exception throws: " << *ex << '\n';
  }
  */

  /*
  // Don't use raw dynamic pointers in a try block
  int d{0};
  try{
    // Item* item_ptr = new Item();
    std::shared_ptr<Item> item_ptr = std::make_shared<Item>();
    if(d == 0)
      throw 0;  // try block exited; memory from item_ptr not released and destructor not called
    std::cout << "Program is working\n";
    // delete item_ptr;
  } catch (int ex) {
    std::cout << "Exception thrown: " << ex << '\n';
  }
  */

  /*
  // Bare throws will cause crash 
  throw 0;
  std::cout << "Code after throw\n";
  */

  // If copy constructor is either deleted, protected, or private, the object can't be thrown as an exception - compiler error
  try {
    MyException e;
    throw e;
  } catch (MyException ex) {

  }

  std::cout << "Program done\n";

  return 0;
}
