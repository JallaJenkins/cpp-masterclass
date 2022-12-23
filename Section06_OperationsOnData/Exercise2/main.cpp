#include <iostream>

int main(){

  double box_width{0.0};
  double box_length{0.0};
  double box_height{0.0};

  std::cout << "Welcome to the Box Rocks" << std::endl;
  std::cout << "Enter box width: "; std::cin >> box_width;
  std::cout << "Enter box length: "; std::cin >> box_length;
  std::cout << "Enter box height: "; std::cin >> box_height;

  double box_base{box_length * box_width};

  std::cout << "Your box rocks " << box_base << " in area and ";
  std::cout << box_base * box_height << " in volume!";

  return 0;
}
