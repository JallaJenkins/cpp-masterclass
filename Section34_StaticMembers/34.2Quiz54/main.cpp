    #include <iostream>
    #include <cmath>
     
    class Point{
        //friend double distance(const Point& from, const Point& to);
        friend class ShapeFactory;
        public : 
        //methods
        Point() = delete;
        Point(double x, double y)
            : m_x(x), m_y(y){
        }
     
        Point(const Point& p)
         : m_x(p.x()), m_y(p.y())
        {
            std::cout << "cpy ctor called..." << std::endl;
        }
     
     
     
        void set_x(double x){
            m_x = x;
        }
     
        void set_y(double y){
            m_y = y;
        }
     
        double x() const   {
            return m_x;
        }
        double y() const   {
            return m_y;
        }

        static const size_t s_point_count{};
        
        //member variables
        private : 
        // constexpr static float threshold{1.2718};
        // constexpr static const char s_verson[]{"1.2.3.4"};
        double m_x{1};
        double m_y{1};
    };
     
     
    void print_point(Point& p){
        std::cout << "Point[x : " << p.x() << ", y : " << p.y() << "]" ;
    }
     
     
     
    int main()
    {
        // Point p1(10.1,10.1);
        // print_point(p1);
        std::cout << "Point count : " << Point::s_point_count << std::endl;

        return 0;
    }
