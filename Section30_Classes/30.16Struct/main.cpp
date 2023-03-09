#include <iostream>

class Dog{
  std::string m_name; // private by default
};

struct Cat{
  std::string m_name; // public by default
};

struct Point{
  double x;
  double y;
};

void print_point(const Point& point){  // pass by ref to avoid manking & destroying a copy of point argument
  std::cout << "Point [x: " << point.x << ", y: " << point.y << "]\n";
}

int main(){

  Dog dog1;
  Cat cat1;

  // dog1.m_name = "Fluffy";  // Compiler error
  cat1.m_name = "Johnny"; // OK

  std::cout << "cat1 name: " << cat1.m_name << '\n';

  Point point1;
  point1.x = 10;
  point1.y = 55.5;
  print_point(point1);

  point1.x = 40.4;
  point1.y = 2.7;
  print_point(point1);

  return 0;
}
