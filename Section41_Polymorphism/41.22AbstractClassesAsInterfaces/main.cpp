#include <iostream>
#include <memory>
#include "animal.h"
#include "feline.h"
#include "dog.h"
#include "cat.h"
#include "bird.h"
#include "pigeon.h"
#include "crow.h"

class Point : public StreamInsertable{
public:
  Point() = default;
  Point(double x, double y) : m_x{x}, m_y{y}
  {
  }

  void stream_insert(std::ostream& out) const override {
    out << "Point [x: " << m_x << ", y: "<< m_y << "]";
  }

private:
  double m_x;
  double m_y;
};

int main(){

  Point p1(10, 20);
  std::cout << "p1: " << p1 << '\n';
  // operator<<(std::cout, p1);

  std::cout << "-------------------\n";

  std::unique_ptr<Animal> animal0 = std::make_unique<Dog>("stripes", "dog1");
  std::cout << *animal0 << '\n';
  std::unique_ptr<Animal> animal1 = std::make_unique<Bird>("white", "bird1");
  std::cout << *animal1 << '\n';

  std::cout << "-------------------\n";

  std::shared_ptr<Animal> animals[] {
    std::make_shared<Dog>("stripes", "dog2"),
    std::make_shared<Cat>("black stripes", "cat2"),
    std::make_shared<Crow>("black wings", "crow2"),
    std::make_shared<Pigeon>("white wings", "pidgeon2")
  };

  std::cout << '\n';
  std::cout << "Printing out animals array:\n";
  for(const auto& a : animals) {
    std::cout << *a << '\n';
  }
  std::cout << *animals[1] << '\n';

  return 0;
}
