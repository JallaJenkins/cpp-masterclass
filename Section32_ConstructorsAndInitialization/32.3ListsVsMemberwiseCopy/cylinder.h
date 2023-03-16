#ifndef CYLINDER_H
#define CYLINDER_H

const double PI {3.1415926535897932384626433832795};

class Cylinder{
  public:

    Cylinder() = default;
    Cylinder(double rad_param, double height_param=10);

    double volume();

    double get_base_radius();
    double get_height();

    void set_base_radius(double rad_param);
    void set_height(double height_param);

  private:
    double base_radius{1};
    double height{1};
};

#endif

