#include <iostream>
#include <concepts>

template <typename T>
concept TintType = requires (T t){
  sizeof(T) <= 4;
  requires sizeof(T) <= 4;
};

template <typename T>
// requires std::integral<T> || std::floating_point<T>
// requires std::integral<T> && TintType<T>
requires std::integral<T> && requires (T t){
  sizeof(T) <= 4;
  requires sizeof(T) <= 4;
}
T add(T a, T b){
  return a + b;
}

int main(){

  int x{6};
  int y{4};

  add(x, y);

  std::cout << sizeof(long int) << '\n';

  return 0;
}
