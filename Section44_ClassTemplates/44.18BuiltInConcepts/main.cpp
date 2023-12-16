#include "boxcontainer.h"

#include <iostream>
#include <concepts>


template<typename T>
requires std::is_arithmetic_v<T>
class Point{

public:
  Point() = default;
  Point(T x, T y)
    : m_x(x), m_y(y)
  {
  }

  friend std::ostream& operator<< (std::ostream& out, const Point<T> operand) {
    out << "Point [x: " << operand.m_x
        << ", y: " << operand.m_y << ']';
    return out;
  }

  bool operator==(const Point& operand) const {
    return (m_x == operand.m_x) && (m_y == operand.m_y);
  }
  std::weak_ordering operator <=> (const Point& operand) const = default;

private:
  T m_x;
  T m_y;
};

struct Dog{
  // ~Dog() = delete;
};

struct Cat{

};

int main(){

  // Numbers
  // std::floating_point<T>
  // static_assert(std::floating_point<int>); // Fail
  // static_assert(std::floating_point<double>); // Pass

  // Equality and order
  // static_assert(std::equality_comparable<int>);
  // static_assert(std::equality_comparable_with<int, double>);
  // static_assert(std::equality_comparable_with<double, std::string>); // Fails

  // static_assert(std::totally_ordered<int>);
  // static_assert(std::totally_ordered<Point<int>>);

  // Others
  static_assert(std::same_as<int, int>);
  // static_assert(std::same_as<int, double>); // Error
  // static_assert(std::same_as<Dog, Cat>); // Error
  // static_assert(std::same_as<BoxContainer<int>, BoxContainer<double>>);

  static_assert(std::destructible<Dog>); // Passes unless destructor is deleted

  return 0;
}
