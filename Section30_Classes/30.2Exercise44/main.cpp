#include <iostream>

class Box{
  public:
    double m_width{};
    double m_length{};
    double m_height{};
  
    double base_area(){
      return m_width * m_length;
    }

    double volume(){
      return base_area() * m_height;
    }
};

int main(){

  Box box;
  // box.m_width = 10;
  // box.m_length = 20;
  // box.m_height = 30;
  box.m_width = 1;
  box.m_length = 1;
  box.m_height = 1;
  std::cout << "base area : " << box.base_area() << std::endl;
  std::cout << "volume : " << box.volume() << std::endl;

  return 0;
}
