#include <iostream>
#include <functional>
#include "boxcontainer.h"


template <typename T, typename Comparator>
T get_best(const BoxContainer<T>& collection, Comparator 
          comparator){
  T best = collection.get_item(0);
  for(size_t i{}; i < collection.size(); ++i){
    if (comparator(collection.get_item(i), best)){
      best = collection.get_item(i);
    }
  }
  return best;
}

// Custom function

template <typename T>
bool custom_greater(const T& param1, const T& param2){
  return param1 > param2;
}

// Custom functor
template <typename T>
class Greater{
public:
  bool operator()(const T& param1, const T& param2){
    return param1 > param2;
  }
};


int main(){

  std::plus<int> adder;
  std::minus<int> subtracter;
  std::greater<int> compare_greater;

  std::cout << std::boolalpha;

  std::cout << "10 + 7: " << adder(10, 7) << '\n';
  std::cout << "10 + 7: " << adder(10, 7) << '\n';
  std::cout << "10 - 7: " << subtracter(10, 7) << '\n';
  std::cout << "10 > 7: " << compare_greater(10, 7) << '\n';

  std::cout << "------------------------------\n";

  BoxContainer<std::string> quote;
  quote.add("The");
  quote.add("sky");
  quote.add("is");
  quote.add("blue");
  quote.add("my");
  quote.add("friend");

  std::greater<std::string> string_comparator{}; // Init standard functor
  
  std::cout << "quote: " << quote << '\n';

  // Built-in functor:
  std::cout << "standard functor: " << get_best(quote, string_comparator) << '\n';
  std::cout << "custom_greater: " << get_best(quote, custom_greater<std::string>) << '\n';
  // Greater<std::string> string_custom_functor;
  std::cout << "custom functor: " << get_best(quote, Greater<std::string>()) << '\n';

  std::cout << "------------------------------\n";

  BoxContainer<int> ints;
  ints.add(10);
  ints.add(3);
  ints.add(6);
  ints.add(72);
  ints.add(23);
  ints.add(4);

  std::greater<int> int_comparator;
  Greater<int> greater_int_custom_comparator;

  std::cout << "ints:" << ints << '\n';
  std::cout << "int_comparator: " << get_best(ints, int_comparator) << '\n';
  std::cout << "greater_int_custom_comparator: " << get_best(ints, greater_int_custom_comparator) << '\n';
  std::cout << "customr: " << get_best(ints, custom_greater<int>) << '\n';


  return 0;
}
