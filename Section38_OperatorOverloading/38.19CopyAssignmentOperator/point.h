#ifndef POINT_H
#define POINT_H
#include <iostream>

class Point
{
	friend std::ostream& operator<<(std::ostream& os, const Point& p);

public:
	Point() = default;
	Point(double x, double y, int data) : 
		m_x(x), m_y(y), p_data(new int(data)) {
			std::cout << "Point parameter constructor called\n";
	}
	Point(const Point& p); // copy constructor

	Point& operator=(const Point& right_operand) {
		std::cout << "Copy assignment operator called\n";
		if(this != &right_operand) {
			m_x = right_operand.m_x;; 
			m_y = right_operand.m_y;
			delete p_data;
			p_data = new int(*(right_operand.p_data));
		}
		return *this;
	}

	void set_data(int data){
		*p_data = data;
	}

	~Point() {
		delete p_data;
	}
	// ~Point() = default;

private: 
	double length() const;   // Function to calculate distance from the point(0,0)

private : 
	double m_x{}; 
	double m_y{}; 
	int* p_data;
};

inline std::ostream& operator<<(std::ostream& os, const Point& p){
	os << "Point [ x : " << p.m_x << ", y : " << p.m_y 
			<< ", data: " << *(p.p_data) << ']';	
	return os;
}

#endif // POINT_H