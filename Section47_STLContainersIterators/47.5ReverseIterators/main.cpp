#include <iostream>
#include <vector>


template <typename T>
void print_collection(const T& collection, size_t begin_adjustment,
                      size_t end_adjustment){

  auto start_point = collection.begin() + begin_adjustment;
  auto end_point = collection.end() - end_adjustment;

  std::cout << " [";
  while(start_point != end_point){
    std::cout << " " << *start_point;
    ++start_point;
  }
  std::cout << " ]";
}

int main(){

  std::vector<int> numbers {1,2 ,3, 4, 5, 6, 7, 8, 9, 10};


  // Trying out reverse iterators
  // auto it = numbers.rbegin(); // Reverse iterators increments backwoards
  std::vector<int>::reverse_iterator it = numbers.rbegin();
  *it = 34;
  std::cout << "Numbers: [";
  while(it != numbers.rend()){
    std::cout << " " << *it;
    ++it;
  }
  std::cout << "]\n";

  std::cout << "--------------\n";

  /*
  auto it_rev = numbers.rbegin();
  if(it_rev != numbers.end()){    // Compiler error; trying to compatre iterators of different types (regular vs reverse)
    std::cout << "This shouldnt' work\n";
  }
  */

  return 0;
}
