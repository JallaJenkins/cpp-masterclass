#include <iostream>
#include <concepts>

template <typename T>
concept Number =  (std::integral<T> || std::floating_point<T>)
                  && !std::same_as<T, bool>
                  && !std::same_as<T, char>;

template <Number T, Number U>
auto add(T a, U b){
  return a + b;
}


int main(){

  // auto result = add(10, 20);
  // auto result = add(10, 20.4);
  // auto result = add(10, 'c'); //  We don't want this to work! Need concepts to filter
  // auto result = add(10, true); //  We don't want this to work! Need concepts to filter
  // std::cout << "result: " << result << '\n';

  // static_assert(Number<bool>);

  return 0;
}
