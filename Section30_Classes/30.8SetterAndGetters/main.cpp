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

    // Setters and getters
    double get_base_radius(){
      return base_radius; // Note return by value = returns copy
    }

    double get_height(){
      return height;
    }

    void set_base_radius(double rad_param){
      base_radius = rad_param;
    }

    void set_height(double height_param){
      height = height_param;
    }

  // Member variables
  private: 
    double base_radius{1};
    double height{1};
};

int main(){

  Cylinder cylinder1(10, 10);
  // std::cout << "base_radius: " << cylinder1.get_base_radius() << '\n';
  std::cout << "volume: " << cylinder1.volume() << '\n';

  // Modify our object(
  cylinder1.set_base_radius(100);
  cylinder1.set_height(10);
  std::cout << "volume: " << cylinder1.volume() << '\n';

  return 0;
}
