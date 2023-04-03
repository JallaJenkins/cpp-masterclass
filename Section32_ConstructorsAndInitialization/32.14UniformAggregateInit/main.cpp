#include <iostream>

class Point{
  public:
    Point(double x, double y) : m_x{x}, m_y{y}{
      std::cout << "Point constructor called\n";
    }

  private:
    double m_x;
    double m_y;
};

struct Person{
  std::string m_name;
  unsigned int m_age;
};

int main(){

  Point p1{10.9, 39.3}; // Uniform initialization () or {}

  // Struct
    // {}
  // Person person1{"Daniel", 35.4}; // Compiler error - can't do narrowing conversion
    // ()
  Person person2("John", 41.7);  // No error - data is converted from double to unsigned int

  // int students[] {1, 2, 3, 4.7, 5}; // Compiler error - can't do narroing conversion
  int students[] (1, 2, 3, 4.7, 5); // No error - data is converted from double to int

  return 0;
}
