#include <iostream>

class Box {

	public :

  // Constructor
  Box(double width, double length, double height){
    m_width = width;
    m_height = height;
    m_length = length;
  }

	//methods
	double base_area(){
		return m_width * m_length;
	}
	double volume(){
		return base_area() * m_height;
	}

	//member variables
	private : 
	double m_width{1};
	double m_length{1};
	double m_height{1};
};


int main(){

  Box box(10.1,20.4,30.3);
  std::cout << "base area : " << box.base_area() << std::endl;
  std::cout << "volume : " << box.volume() << std::endl;

  return 0;
}
