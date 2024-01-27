#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

bool is_odd(int n){
  return n % 2 != 0;
}

int main(){

  // std::vector<int> collection{2, 6, 8, 40, 64, 71};
  // std::set<int> collection{2, 6, 8, 40, 64, 70};
  int collection[] {2, 6, 7, 40, 64, 70};

  // std::all_of with lambda function predicate
  if(std::all_of(std::begin(collection), std::end(collection), [](int i){return i % 2 == 0;})){
    std::cout << "All even\n";
  } else {
    std::cout << "Some odd\n";
  }

  std::cout << "--------------------------\n";

  // std::any_of with functor predicate

  class DivisibleBy{
    const int d;

  public:
    DivisibleBy(int n) : d{n} {};
    bool operator()(int n) const {return n % d == 0;};
  };

  if(std::any_of(std::begin(collection), std::end(collection), DivisibleBy(7))){
    std::cout << "At least one element is divisible by 7\n";
  } else {
    std::cout << "No element is divisible by 7\n";
  }

  std::cout << "--------------------------\n";

  //std::none_of with function pointer
  if(std::none_of(std::begin(collection), std::end(collection), is_odd)){
    std::cout << "None of the elements are odd\n";
  } else {
    std::cout << "At least one element is odd\n";
  }

  return 0;
}
