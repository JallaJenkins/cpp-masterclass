#include <iostream>
#include <cassert>

struct Point{
  public:
    Point(std::initializer_list<double> list){
      // static_assert((list.size() == 2)); // Will fail to compile because expression not constant

      assert(list.size() == 2); // Checks for validity during run and creates error if fails

      /*
      std::cout << "Initializer list constructor called\n";
      std::cout << "list size: " << list.size() << '\n';
      // std::cout << "fist element: " << *(list.begin()) << '\n';
      // std::cout << "second element: " << *(list.begin()+1) << '\n';

      for (size_t i{}; i < list.size(); ++i){
        std::cout << "element [" << i << "]: " << *(list.begin() + i) << '\n';
      }
      */

      x = *(list.begin());
      y = *(list.begin() + 1);
    }

  void print_point() const {
    std::cout << "Point [x: " << x << ", y: " << y << "]\n";
  }

  private:
    double x;
    double y;
};

// void print_point(const Point& p){
//   std::cout << "Point [x: " << p.x << ", y: " << p.y << "]\n";
// }

int main(){

  // Point p1{22.4, 65.4, 5.9, 6.8, 4.3, 5.6, 9.3, 4.3}; // Throws error at runtime
  Point p1{22.4, 65.4};
  // Point p1{22.4}; // Throws error at runtime
  p1.print_point();
  
  return 0;
}
