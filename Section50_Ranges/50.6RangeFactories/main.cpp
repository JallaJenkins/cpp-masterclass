#include <iostream>
#include <vector>
#include <ranges>

int main(){

  // Generate an infinite source of numbers
  // auto infinite_view = std::views::iota(1); //   Stores the computation, not the data; infinite loop!
  // auto infinite_view = std::views::iota(10, 20);  // bounded generator
  auto infinite_view = std::views::iota(1) | std::views::take(20);  // using composition to bind generator

  // Numbers are generated as needed
  /*
  for(auto i : infinite_view){   
    std::cout << i << '\n';
  }
  */

  for(auto i : std::views::take(std::views::iota(1), 20)){
    std::cout << i << '\n';
  }



  return 0;
}
