#include <iostream>

struct Point {
  Point (double x, double y) : m_x(x), m_y(y) {}
  ~Point(){
  }
  double m_x{};
  double m_y{};

  // bool operator==(const Point& p) const = default;
};

bool operator==(Point& p1, Point& p2) {
    return p1.m_x == p2.m_x && p1.m_y == p2.m_y;
};

int main(){

  Point p1(1,1);
  Point p2(2,2);
  auto result1 = (p2 == p1);
  auto result2 = (p2!=p1);
  std::cout << std::boolalpha;
  std::cout << "result1 : " << result1 << std::endl;
  std::cout << "result2 : " << result2 << std::endl;

  return 0;
}
