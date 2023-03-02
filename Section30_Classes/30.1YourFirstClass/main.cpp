#include <iostream>

const double PI {3.1415926535897932384626433832795};

class Cylinder {
  public:
    double volume(){
      return PI * base_radius * base_radius * height;
    }

  // Member variables
  public: 
    double base_radius{1};
    double height{1};
};

int main(){

  Cylinder cylinder1;
  std::cout << "volume: " << cylinder1.volume() << '\n';
  // std::cout << "base_radius: " << cylinder1.base_radius << '\n';
  // std::cout << "height: " << cylinder1.height << '\n';

  // Change attributes
  cylinder1.base_radius = 10;
  cylinder1.height = 3;

  std::cout << "volume: " << cylinder1.volume() << '\n';

  cylinder1.height = 8;

  std::cout << "volume: " << cylinder1.volume() << '\n';


  return 0;
}
