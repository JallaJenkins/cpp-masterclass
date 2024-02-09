#include "boxcontainer.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <ranges>

void print(auto view) {
  for(auto i : view) {    // Computation happens here
    std::cout << i << " ";
  }
  std::cout << '\n';
}

struct Student {
  std::string m_name;
  unsigned int m_age;

  friend std::ostream& operator<<(std::ostream& out, const Student& s){
    out << "Student [ name: " << s.m_name << ", age: " << s.m_age << "]";
    return out;
  }

  auto operator <=>(const Student& s) const = default;
};

int main(){

  auto evens = [](int i){
    return (i%2) == 0;
  };

  BoxContainer<int> vi;
  vi.add(5);
  vi.add(1);
  vi.add(4);
  vi.add(8);
  vi.add(5);
  vi.add(3);
  vi.add(7);
  vi.add(9);
  vi.add(6);

  // filter view
  std::cout << '\n';
  std::cout << "std::ranges::filter_view:\n";
  
  std::cout << "vi: ", print(vi);

  std::ranges::filter_view v_evens = std::ranges::filter_view(vi, evens);
  std::cout << "vi evens: ", print(v_evens);
  // can also print on the fly

  // transform view
  std::cout << '\n';
  std::cout << "std::ranges::transform_view:\n";
  std::ranges::transform_view v_transformed = std::ranges::transform_view(vi, 
    [](int i){return i * 10;});
  std::cout << "vi transformed: ", print(v_transformed);
  std::cout << "vi: ", print(vi);

  // take view
  std::cout << "\n";
  std::cout << "std::ranges::take_view:\n";
  std::ranges::take_view v_taken = std::ranges::take_view(vi, 5);
  std::cout << "v_taken: ", print(v_taken);
  std::cout << "vi: ", print(vi);

  //take while
  std::cout << "\n";
  std::cout << "std::ranges::take_while_view:\n";
  std::ranges::take_while_view v_take_while = std::ranges::take_while_view(vi,
    [](int i){return(i%2)!=0;});
  std::cout << "v_take_while: ", print(v_take_while);
  std::cout << "vi: ", print(vi);

  // drop view
  std::cout << "\n";
  std::cout << "std::ranges::drop_view:\n";
  std::ranges::drop_view v_drop = std::ranges::drop_view(vi, 5);
  std::cout << "v_drop: ", print(v_drop);
  std::cout << "vi: ", print(vi);

  // drop while
  std::cout << "\n";
  std::cout << "std::ranges::drop_while_view:\n";
  std::ranges::drop_while_view v_drop_while = std::ranges::drop_while_view(vi, 
    [](int i){return(i%2)!=0;});
  std::cout << "v_drop_while: ", print(v_drop_while);
  std::cout << "vi: ", print(vi);

  // range adaptors
  std::cout << "\n";
  std::cout << "std::views:filter:\n";
  auto v_evens_filter = std::views::filter(vi, evens);
  std::cout << "v_evens_filter: ", print(v_evens_filter);
  std::cout << "vi: ", print(vi);

  // Students example
  std::cout << '\n';
  std::cout << "Students example:\n";
  BoxContainer<Student> class_room;
  class_room.add(Student("Mike",12));
  class_room.add(Student("John",17));
  class_room.add(Student("Drake",14));
  class_room.add(Student("Mary",16));
  
  std::cout << "classroom: " << '\n';
  for (auto& s : class_room) {
    std::cout << "   " << s << '\n';
  }

  std::ranges::sort(class_room, std::less<>{}, &Student::m_age);

  std::cout << std::endl;
  std::cout << "classroom (after sort) : " << std::endl;
  for( auto& s : class_room){
      std::cout << "   " <<  s << std::endl;
    }

  // print(class_room);
  std::cout << "students under 15:\n";
  auto less_than_15_v = class_room | std::views::filter([](Student& s)
    {return s.m_age < 15;});
  print(less_than_15_v);



  return 0;
}
