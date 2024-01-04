#include <iostream>
#include "boxcontainer.h"

// Templated type alias
template <typename T>
using compare_T = bool(*)(const T& one, const T& two);

template <typename T>
T get_best (const BoxContainer<T>& collection, compare_T<T> comparator){
  T best = collection.get_item(0);
  for(size_t i{}; i < collection.size(); ++i){
    if(comparator(collection.get_item(i), best)){
      best = collection.get_item(i);
    }
  }
  return best;
}

bool larger_in_size(const std::string& str1, const std::string& str2){
  return (str1.size() > str2.size());
}

bool greater_lexicographically(const std::string& str1, const std::string& str2){
  return (str1 > str2);
}

bool larger_int(const int& param1, const int& param2){
  return param1 > param2;
}

// Example of a templated callback function
template <typename T>
bool smaller(const T& param1, const T& param2){
  return param1 < param2;
}

int main(){

 
  
  BoxContainer<std::string> quote;
  quote.add("The");
  quote.add("sky");
  quote.add("is");
  quote.add("blue");
  quote.add("my");
  quote.add("friend");
  std::cout << "Getting the best:\n";
  std::cout << "larger in size: " << get_best(quote, larger_in_size) << '\n';
  std::cout << "greater lex: " << get_best(quote, greater_lexicographically) << '\n';

  BoxContainer<int> ints;
  ints.add(1);
  ints.add(2);
  ints.add(23);
  ints.add(4);
  ints.add(233);

  // std::cout << "larger int: " << get_best(ints, larger_int) << '\n';
  std::cout << "smaller int: " << get_best(ints, smaller) << '\n';

  // std::cout << "---------------------\n";

  return 0;
}
