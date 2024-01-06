#include <iostream>
#include <concepts>
#include "boxcontainer.h"

// A functor can take parameters and internally store them as member variables
template <typename T>
requires std::is_arithmetic_v<T>
class IsInRange{
  T min_inclusive;
  T max_inclusive;
public:
  IsInRange(T min, T max) : min_inclusive{min}, max_inclusive{max}{}
  bool operator()(T value) const {
    return ((value >= min_inclusive) && (value <= max_inclusive));
  }
};

template <typename T, typename RangePicker>
requires std::is_arithmetic_v<T>
T range_sum(const BoxContainer<T>& collection, 
            RangePicker is_in_range){
  T sum{};
  for(size_t i{}; i < collection.size(); ++i){
    if(is_in_range(collection.get_item(i))){
      sum += collection.get_item(i);
    }
  }
  return sum;
}


int main(){

  BoxContainer<double> doubles;
  doubles.add(10.1);
  doubles.add(20.2);
  doubles.add(30.3);
  doubles.add(15);

  std::cout << "doubles: " << doubles << '\n';
  std::cout << "range_sum (10.0-15.5): " << range_sum(doubles, IsInRange<double>(10.0, 15.5)) << '\n';
  std::cout << "range_sum (10.0-21.5): " << range_sum(doubles, IsInRange<double>(10.0, 21.5)) << '\n';
  std::cout << "range_sum (10.0-41.5): " << range_sum(doubles, IsInRange<double>(10.0, 41.5)) << '\n';

  std::cout << "------------------------\n";

  BoxContainer<std::string> strings;
  strings.add("Hello");
  strings.add("World");

  // range_sum(strings, IsInRange<std::string>("Hello", "World"));  // Compiler error - requirements not satisfied

  BoxContainer<int> ints;
  ints.add(10);
  ints.add(3);
  ints.add(6);
  ints.add(72);
  ints.add(23);
  ints.add(4);

  std::cout << "ints: " << ints << '\n';
  std::cout << "range_sum(10-20): " << range_sum(ints, IsInRange<int>(10, 20)) << '\n';
  std::cout << "range_sum(10-30): " << range_sum(ints, IsInRange<int>(10, 30)) << '\n';

  return 0;
}
