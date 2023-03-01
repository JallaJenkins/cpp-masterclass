#include <iostream>
#include <string>
#include <type_traits>
#include <concepts>

template <typename T>
concept ConvertibleToStdString = requires(T a) {
  std::to_string(a);
};

template <ConvertibleToStdString T, ConvertibleToStdString U>
std::string concatenate(T a, U b) {
  return std::to_string(a) + std::to_string(b);
}

int main(){

  auto result = concatenate(22.22,33.33);
  std::cout << "result : " << result << std::endl;

  return 0;
}
