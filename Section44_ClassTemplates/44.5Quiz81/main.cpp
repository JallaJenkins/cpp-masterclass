#include <iostream>

template <typename T , unsigned int size>
class Point{
    T m_components[size];
public : 
    T get_value(unsigned int index) const{
        return m_components[index];
    }
    void set_value(unsigned int index, T value){
        m_components[index] = value;
    }
    void print_info() const{
        std::cout << "point : [ ";
        for(unsigned int i{0}; i < size ; ++i){
            std::cout << m_components[i] << " " ;
        }
         std::cout << "]";
    }
};

int main(){

  Point<int,3> point_3d;
  point_3d.set_value(0,10);
  point_3d.set_value(1,20);
  point_3d.set_value(2,30);
  point_3d.print_info() ;

  Point<double,2> point_2d;
  point_2d.set_value(0,10.22);
  point_2d.set_value(1,20.11);

  point_2d = point_3d;
  point_2d.print_info() ;

  return 0;
}
