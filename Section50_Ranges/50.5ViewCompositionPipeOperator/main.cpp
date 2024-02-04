#include <iostream>
#include <ranges>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <map>

void print(auto view){
  for (auto i : view){ 
    std::cout << i << " ";
  }
  std::cout << '\n';
}

int main(){

  std::vector<int> vi {1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::cout << "vi: ", print(vi);

  // Filter out events and square them out

    // Raw function composition
  
  auto even = [](int n){return n % 2 ==0;};
  auto my_view = std::views::transform(std::views::filter(vi, even), [](int n){return n * n;});
  std::cout << "vi even-filtered and squared: ", print(my_view);

  std::cout << '\n';
  std::cout << "Pipe operator:\n";
  auto my_view1 = vi | std::views::filter(even) | std::views::transform([](auto n){return n*n;});
  std::cout << "vi even-filtered and squared: ", print(my_view1);

  // Classroom example
  std::cout << '\n';
  // std::unordered_map<std::string, unsigned int> classroom {
  std::map<std::string, unsigned int> classroom { // map will autosort based on keys
    {"John",11},
    {"Mary",17},
    {"Steve",15},
    {"Lucy",14},
    {"Ariel",12}
  };

  // Use views to print out names only
  // auto names_view = std::views::keys(classroom);
  auto names_view = classroom | std::views::keys;
  // std::cout << "names: ", print(names_view);
  std::ranges::copy(names_view, std::ostream_iterator<std::string>(std::cout, " "));

  // Print out the ages:
  std::cout << '\n';
  auto ages_view = std::views::values(classroom);
  std::cout << "ages: ";
  std::ranges::copy(ages_view, std::ostream_iterator<unsigned int>(std::cout, " "));

  // Names in reverse
  // Won't work with unordered map because it has no reverse iterators
  std::cout << '\n';
  std::cout << "names in reverse: ";
  std::ranges::copy(std::views::keys(classroom) | std::views::reverse,
    std::ostream_iterator<std::string>(std::cout, " "));

  // Pick names coming before the letter "M"
  std::cout << '\n';
  auto before_M = [](const std::string& name){
    return static_cast<unsigned char>(name[0]) < static_cast<unsigned char>('M');
  };
  std::cout << "Names before M: ";
  std::ranges::copy(std::views::keys(classroom) | std::views::filter(before_M),
    std::ostream_iterator<std::string>(std::cout, " "));
  
  return 0;
}
