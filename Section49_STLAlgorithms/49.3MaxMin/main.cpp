#include <iostream>
#include <algorithm>
#include <set>
#include <list>
#include <vector>


int main(){

  // std::vector<int> v {3, 400, 51, 6, 7, 23, 56, 71};
  int v[] {3, 400, 51, 6, 7, 23, 56, 71};
  // std::list<int> v {3, 400, 51, 6, 7, 1123, 56, 71};

  // max_element and min_element return iterators to corresponding element
  auto result = std::max_element(std::begin(v), std::end(v));
  std::cout << "max element is: " << *result << '\n';
  result = std::min_element(std::begin(v), std::end(v));
  std::cout << "min element is: " << *result << '\n';

  std::cout << "-------------------------\n";

  // Distances
  int number_to_find {350};

  auto distance = [number_to_find](int x, int y){
    return (std::abs(x - number_to_find) < std::abs(y - number_to_find));
  };

  // Finding the closest element
  auto closest = std::min_element(std::begin(v), std::end(v), distance);
  std::cout << "Closest element: " << *closest << '\n';

  // Finding the furthest
  auto furthest = std::max_element(std::begin(v), std::end(v), distance);
  std::cout << "Furthest element: " << *furthest << '\n';

  // Finding both at once
  auto [closest1, furthest1] = std::minmax_element(std::begin(v), std::end(v), distance);
  std::cout << "Closest, furthest: " << *closest1 << ", " << *furthest1 << '\n';


  return 0;
}
