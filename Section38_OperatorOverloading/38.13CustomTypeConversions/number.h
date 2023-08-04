#include <iostream>
#include "point.h"

// class Point;

class Number
{
    friend std::ostream& operator<<(std::ostream& out , const Number& number);

    //Arithmetic operators
    friend Number operator+(const Number& left_operand, const Number& right_operand);
    friend Number operator-(const Number& left_operand, const Number& right_operand);
    friend Number operator*(const Number& left_operand, const Number& right_operand);
    friend Number operator/(const Number& left_operand, const Number& right_operand);
    friend Number operator%(const Number& left_operand, const Number& right_operand);
		
public:
	Number() = default;
	Number(int value );

  explicit operator double() const {
    return static_cast<double>(m_wrapped_int);
  }


  // operator Point() const;
  explicit operator Point() const {
    std::cout << "Using custom type conversion\n";
    return Point(static_cast<double>(m_wrapped_int),
    static_cast<double>(m_wrapped_int));
  };
 
  //getter
  int get_wrapped_int() const{
      return m_wrapped_int;
  }
    
  ~Number();
    
private : 
    int m_wrapped_int{0};
};