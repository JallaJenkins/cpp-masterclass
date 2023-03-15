#include <iostream>

// struct Point
class Point
{
    
  
  public:
    double x;
    double y;

  // private:
  //   double z;
};

void print_point(const Point p){
  std::cout << "Point [x: " << p.x << ", y: " << p.y << "]\n";
}

int main(){

  Point point1;

  point1.x = 5;
  point1.y = 6;

  print_point(point1);

  auto [a, b] = point1; // Not possible with references. only copies

  std::cout << "a: " << a << ", b: " << b << '\n';

  point1.x = 44.1;
  point1.y = 55.2;

  print_point(point1);

  std::cout << "a: " << a << ", b: " << b << '\n';

  auto func = [=](){
    std::cout << "a (captured): " << a << '\n';
    std::cout << "b (captured): " << b << '\n';
  };
  
  func();

  return 0;
}
