#include <iostream>
#include <type_traits>

template<typename T>
class Point{
  static_assert(std::is_arithmetic_v<T>, "Coordinates of Point can only be numbers");

public:
  Point<T>

};

int main(){

  return 0;
}
