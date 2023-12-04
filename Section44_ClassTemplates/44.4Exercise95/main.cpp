#include <iostream>
#include "point.h"

int main(){

  Point<int,3> point_3d;
    point_3d.set_value(0,10);
    point_3d.set_value(1,20);
    point_3d.set_value(2,30);
    point_3d.print_info() ;

  Point<double,2> point_2d; // set up a two dimensional point object
    point_2d.set_value(0,10.22); // set up the first component with a double literal
    point_2d.set_value(1,20.11); // set up the second component with a double literal
    point_2d.print_info() ; // print info. should print  point : [ 10.22 20.11 ]
    point_2d.get_value(0);

  return 0;
}
