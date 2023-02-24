#include <iostream>

/*
template <int threshold, typename T>
bool is_valid(T collection[], size_t size)
{
  T sum{};
  for(size_t i{0}; i < size; ++i){
    sum += collection[i];
  }
  return (sum > threshold);
}
*/

template <typename T>
bool is_valid(T collection[], int threshold, size_t size)
{
  T sum{};
  for(size_t i{0}; i < size; ++i){
    sum += collection[i];
  }
  return (sum > threshold);
}

// The following only works with C++20 b/c of the non-integral non-type template parameter
template <typename T, double coeff>
T process(T a, T b){
  return (a * b) - coeff;
}

int main(){

  double temperatures[] {10.0, 20.0, 30.0, 40.0, 50.0, 100.0};
  // auto result = is_valid<200, double>(temperatures, std::size(temperatures)); // with non-type template parameter
  auto result = is_valid(temperatures, 200, std::size(temperatures)); // with regular parameter

  std::cout << "result: " << std::boolalpha << result << '\n';

  return 0;
}
