#include <iostream>
#include "boxcontainer.h"
#include <memory>

void populate_box(BoxContainer<int>& box, int modifier){
  for(size_t i{0}; i < 20; ++i){
    box.add((i+1)*modifier);
  }
}




int main(){

  BoxContainer<int> box1;
  populate_box(box1, 2);

  std::cout << "box1: " << box1 << '\n';

  std::cout << "--------------------------\n";

  // BoxContainer<int> box2(box1); // Compiler error; copy constructor deleted
<<<<<<< HEAD
=======

  BoxContainer<int> box2;
  box2 = std::move(box1);

  std::cout << "-------------------------\n";
>>>>>>> fe2276009a87868b0a193c9601a553be854745bb

  std::cout << "box1: " << box1 << '\n';
  std::cout << "box2: " << box2 << '\n';

  std::cout << "-------------------------\n";

  std::unique_ptr<int> ptr_int = std::make_unique<int>(33);

  std::cout << "*ptr_int: " << *ptr_int << '\n';

  std::unique_ptr<int> ptr_int_copy = std::move(ptr_int);

  if(ptr_int){
    std::cout << "*ptr_int: " << *ptr_int << '\n';
  } else {
    std::cout << "ptr_int is invalid\n";
  }

  std::cout << "*ptr_int_copy: " << *ptr_int_copy << '\n';

  return 0;
}
