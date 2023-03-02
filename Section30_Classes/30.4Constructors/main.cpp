#include <iostream>

const double PI {3.1415926535897932384626433832795};

class Cylinder {
  public:

    // Constructors
    
    // Default constructor - compiler will create this behind the scenes if there is no explict constructor
    // Cylinder(){
      
    // }

    Cylinder(){
      base_radius = 2.0;
      height = 2.0;
    }

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
    double base_radius;
    double height;
};

int main(){

  Cylinder cylinder1; // Use default constructor
  // Cylinder cylinder1(10, 4); // Use parameter constructor
  std::cout << "volume: " << cylinder1.volume() << '\n';

  return 0;
}
