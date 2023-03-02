#include <iostream>

const double PI {3.1415926535897932384626433832795};

class Cylinder {
  public:
    // Constructors
    Cylinder() = default;

    Cylinder(double rad_param, double height_param){
      base_radius = rad_param;
      height = height_param;
    }

    // Methods
    double volume(){
      return PI * base_radius * base_radius * height;
    }

  // Member variables
  private: 
    double base_radius{1};
    double height{1};
};

int main(){

  Cylinder cylinder1;
  std::cout << "volume: " << cylinder1.volume() << '\n';

  return 0;
}
