#include <iostream>

// template <typename T, typename P>
// auto maximum(T a, P b);

// Must put definition before function call when using auto
template <typename T, typename P>
auto maximum(T a, P b){
  return (a > b) ? a : b;
}

int main(){

  // Largest type in function return expression will be deduced as return type

  // auto max1 = maximum(12.5, 33); // double return type deduced
  // auto max1 = maximum('e', 33); // int return type deduced
  auto max1 = maximum<double, int>('e', 33); // double return type deduced
  std::cout << "max1: " << max1 << '\n';
  std::cout << "size of max1: " << sizeof(max1) << '\n';

  return 0;
}

// template <typename T, typename P>
// auto maximum(T a, P b){
//   return (a > b) ? a : b;
// }