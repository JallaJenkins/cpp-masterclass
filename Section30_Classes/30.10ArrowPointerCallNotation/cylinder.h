#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder {
  public:
    // Constructors
    Cylinder() = default;
    Cylinder(double rad_param, double height_param);

    // Methods
    double volume();

    // Setters and getters
    double get_base_radius();
    double get_height();
    void set_base_radius(double rad_param);
    void set_height(double height_param);

  // Member variables
  private: 
    double base_radius{1};
    double height{1};
};

#endif