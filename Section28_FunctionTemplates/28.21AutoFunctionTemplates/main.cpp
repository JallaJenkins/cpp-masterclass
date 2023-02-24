#include <iostream>

/*
template <typename T, typename P>
decltype(auto) func_add(T a, P b){
  return a + b;
}
*/


auto func_add(auto a, auto b){
  return a + b;
}


int main(){

  int a{7};
  double b{78.2};

  auto result = func_add(a, b);
  std::cout << "result: " << result << '\n';
  std::cout << "sizeof(result): " << sizeof(result) << '\n';


  return 0;
}
