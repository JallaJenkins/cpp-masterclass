#include <iostream>

template <typename T>
concept ConvertibleToStdString = requires( T n) {
                                      std::to_string(n);
                                  };
  
template <typename T, typename U>
requires ConvertibleToStdString<T> && ConvertibleToStdString<U>
  auto concatenate(const T   n1, const U  n2) 
  ->decltype(std::to_string(n1) + std::to_string(n2)) 
{
    return std::to_string(n1) + std::to_string(n2);
}

int main(){

  auto result = concatenate(11,22.22);
  std::cout << "result : " << result << std::endl;

  return 0;
}
