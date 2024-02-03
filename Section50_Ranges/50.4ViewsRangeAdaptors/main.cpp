#include <iostream>
#include <ranges>
#include <algorithm>
#include <vector>

struct Student{
  friend std::ostream& operator<<(std::ostream& out, const Student& s){
        out << "Student [ name : " << s.m_name << ", age : " << s.m_age << "]";
        return out;
    }
    auto operator <=>(const Student& s) const= default;
    std::string m_name;
    unsigned int m_age;
};

void print(auto view){
  for (auto i : view){    // Computation happens here (for std::range::x_view)
    std::cout << i << " ";
  }
  std::cout << '\n';
}

int main(){

  std::vector<int> vi {1, 2, 3, 4, 5, 6, 7, 8, 9};

  // std::ranges::filter_view
  std::cout << '\n';
  std::cout << "std::ranges::filter_view:\n";
  auto evens = [](int i){return i % 2 == 0;};
  
  std::cout << "vi: ", print(vi);
  
  std::ranges::filter_view v_evens = std::ranges::filter_view(vi, evens); // No computation at this stage
  std::cout << "vi evens: ", print(v_evens);  // Computation happens in the print function

  // Print evens on the fly
  std::cout << "vi evens on the fly: ";
  print(std::ranges::filter_view(vi, evens));
  std::cout << "vi odds on the fly: ";
  print(std::ranges::filter_view(vi, [](int i){return i % 2 != 0;}));

  std::cout << "vi: ", print(vi);

  // std::ranges::transform_view
  std::cout << '\n';
  std::cout << "std::ranges::transform_view:\n";
  std::ranges::transform_view vi_transformed = std::ranges::transform_view(vi, 
    [](int i){return i * 10;});
  std::cout << "vi_transformed: ", print(vi_transformed);
  std::cout << "vi: ", print(vi);

  // Take view
  std::cout << '\n';
  std::cout << "std::ranges::take_view:\n";
  std::ranges::take_view vi_taken = std::ranges::take_view(vi, 5);
  std::cout << "vi_taken: ", print(vi_taken);
  std::cout << "vi: ", print(vi);

  // take _while x is met
  std::cout << '\n';
  std::cout << "std::views::take_while:\n";
  vi = {1, 11, 23, 131, 2, 3, 4, 5, 6, 7, 8, 9};
  std::ranges::take_while_view vi_taken_while = std::ranges::take_while_view(vi,
    [](int i){return i % 2 != 0;});
  std::cout << "vi: ", print(vi);
  std::cout << "vi_taken_while: ", print(vi_taken_while);

  // std::ranges::drop_view
  std::cout << '\n';
  std::cout << "std::ranges::drop_view:\n";
  std::ranges::drop_view vi_drop = std::ranges::drop_view(vi, 5);
  std::cout << "vi: ", print(vi);
  std::cout << "vi_drop: ", print(vi_drop);

  // std::ranges::drop_while_view
  std::cout << '\n';
  std::cout << "std::ranges::drop_while_view:\n";
  std::ranges::drop_while_view vi_drop_while = std::ranges::drop_while_view(vi,
    [](int i){return i % 2 != 0;});
  std::cout << "vi: ", print(vi);
  std::cout << "vi_drop_while: ", print(vi_drop_while);

  // keys and values views
  std::cout << '\n';
  using pair = std::pair<int, std::string>;
  std::vector<pair> numbers {{1, "one"}, {2, "two"}, {3, "three"}};

  // auto k_view = std::ranges::keys_view(numbers);     // Not available
  // auto v_view = std::ranges::values_view(numbers);   // Not available

  auto k_view = std::views::keys(numbers);
  auto v_view = std::views::values(numbers);
  
  std::cout << "k_view: ", print(k_view);
  std::cout << "v_view: ", print(v_view);

  // std::views::filter
  std::cout << '\n';
  std::cout << "std::views::filter:\n";
  // auto evens = [](int i){return i % 2 == 0;};
  
  std::cout << "vi: ", print(vi);
  
  // auto vi_evens1 = std::views::filter(vi, evens); 
  std::ranges::filter_view vi_evens1 = std::views::filter(vi, evens); 
  std::cout << "vi evens1: ", print(vi_evens1);  

  // Students example
  std::cout << '\n';
  std::cout << "students example:\n";
  std::vector<Student> classroom {{"Mike",12},{"John",17},{"Drake",14},{"Mary",16}};
  std::cout << '\n';
  std::cout << "classroom:\n";
  for(auto &s : classroom){
    std::cout << " " << s << '\n';
  }

  std::ranges::sort(classroom, std::less<>{}, &Student::m_age);
  // std::sort(classroom, std::less<>{}, &Student::m_age);
  std::cout << '\n';
  std::cout << "classroom after sort:\n";
  for(auto &s : classroom){
    std::cout << " " << s << '\n';
  }

  std::cout << "students under 15 : ";
  print(std::views::take_while(classroom, [](const Student& s){return s.m_age < 15;}));

  std::cout << '\n';
  return 0;
}
