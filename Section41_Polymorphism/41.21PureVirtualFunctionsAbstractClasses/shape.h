#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {

protected:
  Shape() = default;
  Shape(std::string_view description);

public:
  virtual ~Shape() = default;  // If desctructor is not public, you can't delete base_ptrs

  // Pure virtual functions
  virtual double perimeter() const = 0;
  virtual double surface() const = 0;
  
  std::string description() const {
    return m_description;
  }

private:
  std::string m_description;

};

#endif // SHAPE_H