#include <iostream>

struct Point{
  double x;
  double y;

};

void print_point(const Point& p){
  std::cout << "Point [x: " << p.x << ", y: " << p.y << "]\n";
}

int main(){

  Point p1{10, 20};
  print_point(p1);

  int scores[] {44, 62, 67, 98, 56, 40};

  return 0;
}
