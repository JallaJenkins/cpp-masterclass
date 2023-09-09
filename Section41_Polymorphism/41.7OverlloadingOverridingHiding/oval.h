#ifndef OVAL_H
#define OVAL_H
#include "shape.h"
#include <string_view>

class Oval : public Shape
{
public:
    Oval()= default;
    Oval(double x_radius, double y_radius,
                std::string_view description);
    ~Oval();
    

    // virtual void draW() const override{  // Compiler error!
    virtual void draw() const override {  // fixed
        std::cout << "Oval::draw() called. Drawing " << m_description <<
            " with m_x_radius : " << m_x_radius << " and m_y_radius : " << m_y_radius 
                    << std::endl;
    }

    virtual void draw(int color_depth, std::string_view color) const  {
        std::cout << "Oval::draw() with color depth " << color_depth << " called. Drawing " << m_description << std::endl;
    }

public:
    double get_x_rad() const{
        return m_x_radius;
    }
    
    double get_y_rad() const{
        return m_y_radius;
    }
 
private : 
    double m_x_radius{0.0};
    double m_y_radius{0.0};
};

#endif // OVAL_H
