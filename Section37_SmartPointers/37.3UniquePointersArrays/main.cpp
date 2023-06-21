#include <iostream>
#include <memory>

#include "dog.h"

int main(){

  /*
  // Array allocated on the stack
  {
    std::cout << "Working with dog array on the stack\n";
    Dog dog_array[3] {Dog("Dog1"), Dog("Dog2"), Dog("Dog3")};
    for(size_t i {0}; i < 3; ++i){
      dog_array[i].print_info();
    }
  }
  */

  /*
  // Array allocated on the heap
  {
    std::cout << "Array located on the heap. Must explicitly release memory\n";
    Dog* p_dog_array_raw = new Dog[3]{Dog("Dog4"), Dog("Dog5"), Dog("Dog6")};

    for(size_t i {0}; i < 3; ++i){
      p_dog_array_raw[i].print_info();
    }

    // Must release manually or Dog objects will not ve destroyed
    delete[] p_dog_array_raw;
  }
  */

  // Array allocated on the heap with unique_ptr. Space is released automatically
  {
    std::cout << "Array on heap with unique ptr\n";

    auto arr_ptr = std::unique_ptr<Dog[]> (new Dog[3]{Dog("Dog7"), Dog("Dog8"),
                                          Dog("Dog9")});
    // auto arr_ptr = std::make_unique<Dog[]>(3); // Works. Uses default constructor
    // auto arr_ptr = std::make_unique<Dog[]>(3) {Dog("Dog7"), Dog("Dog8"),
                                        //  Dog("Dog9")};  // Compiler error
    // auto arr_ptr = std::make_unique<Dog[]> {Dog("Dog7"), Dog("Dog8"),
    //                                      Dog("Dog9")}; // Compiler error

    for(size_t i{0}; i < 3; ++i){
      arr_ptr[i].print_info();
    }
  

  }

  std::cout << "Done!\n";

  return 0;
}
