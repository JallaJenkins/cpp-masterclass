#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

struct Sum{
  int sum{0};
  void operator()(int n){ sum+=n;};
};

int main(){

  std::vector<int> nums{3, 4, 2, 8, 15, 267};
  // int nums[] {3, 4, 2, 8, 15, 267};
  // std::set<int> nums {3, 4, 2, 8, 15, 267};

  auto print = [](const int& n){
    std::cout << " " << n;
  };

  // Print each elt in the collection using lanbda function predicate
  std::for_each(std::begin(nums), std::end(nums), print);
  std::cout << '\n';

  std::cout << "--------------------------------\n";

  // Predicate that modifies elements in place
  // REMEMEBER TO PASS BY REFERENCE
  std::for_each(std::begin(nums), std::end(nums), [](int& n){n++;});

  std::for_each(std::begin(nums), std::end(nums), print);
  std::cout << '\n';

  std::cout << "--------------------------------\n";

  // Capturing result through returned functor object

  Sum s;
  // Sum t = std::for_each(std::begin(nums), std::end(nums), s);
  s = std::for_each(std::begin(nums), std::end(nums), s);
  std::for_each(std::begin(nums), std::end(nums), s);
  std::cout << "sum: " << s.sum << '\n';

  // Using a local variable with lambda function to capture result
  int our_result{0};
  std::for_each(std::begin(nums), std::end(nums), [&our_result](int n){our_result+=n;});
  std::cout << "our_result: " << our_result << '\n';
  return 0;
}
