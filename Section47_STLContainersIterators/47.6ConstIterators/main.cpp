#include <iostream>
#include <vector>

template <typename T>
void print_collection(const T& collection){
  auto it = collection.begin();

  std::cout << " [";
  while(it != collection.end()){
    std::cout << " " << *it;
    ++it;
  }
  std::cout << " ]";
}

int main(){

  std::vector<int> numbers {11, 22, 33, 44, 55, 66, 77};
  std::vector<int>::iterator it = numbers.begin();

  std::cout << "numbers: ", print_collection(numbers), std::cout <<'\n';

  std::cout << "Changing data...\n";
  while(it != numbers.end()){
    *it = 100;
    ++it;
  }

  std::cout << "numbers: ", print_collection(numbers), std::cout <<'\n';

  std::cout << "-------------------\n";

  std::vector<int>::const_iterator c_it = numbers.cbegin();
  while(c_it != numbers.end()){
    // *c_it = 100;    // Compiler error; c_it is const
    ++c_it;         // OK - can increment or decrement a const_iter
  }

  // Constant reverse iterators
  auto it1 = numbers.crbegin(); 
  // std::vector<int>::const_reverse_iterator it1 = numbers.crbegin();
  while(it1 != numbers.crend()){    // Must use rend or crend here!!
    // *it1 = 100;    // Compiler error; c_it is const
    ++it1;         // OK - can increment or decrement a const_iter
  } 


  return 0;
}
