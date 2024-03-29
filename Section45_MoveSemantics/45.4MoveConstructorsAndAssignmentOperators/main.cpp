#include <iostream>
#include "boxcontainer.h"

void populate_box(BoxContainer<int>& box, int modifier){
  for(size_t i{0}; i < 20; ++i){
    box.add((i+1)*modifier);
  }
}

BoxContainer<int> make_box(int modifier){
  BoxContainer<int> local_int_box(20);
  populate_box(local_int_box, modifier);
  return local_int_box;
}

int main(){

  BoxContainer<int> box_array[2];

  std::cout << "------------------------------\n";

  for(size_t i{}; i < 2; ++i){
    box_array[i] = make_box(i + 1); // Copy assignment operator used at each iteration. Copies data to and from a temp BoxContainer and then throws the temp away.
  
  }
  std::cout << "------------------------------\n";

  //  Total objects created and destroyed is 4, but we only really use 2 objects in our program. We can make this more efficient - see next lecture.

  return 0;
}
