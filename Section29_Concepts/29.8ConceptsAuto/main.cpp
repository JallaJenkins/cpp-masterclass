#include <iostream>
#include <concepts>

// This syntax constrains the auto parameters you pass in the comply with
// std::integral concept
std::integral auto add (std::integral auto a, std::integral auto b){
  return a + b;
}

int main(){

  // std::floating_point auto x = add(10, 5);
  std::floating_point auto x = 3.9;

  return 0;
}
