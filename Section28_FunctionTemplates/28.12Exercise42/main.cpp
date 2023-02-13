#include <iostream>
#include <string>

template <typename T, typename U>
std::string concatenate(T a, U b){
  return (std::to_string(a) + std::to_string(b));
}

int main(){

  std::string message = concatenate(11,22ul);
  std::cout << "result : " << message << std::endl;

  return 0;
}
