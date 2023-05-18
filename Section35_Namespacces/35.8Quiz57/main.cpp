    #include <iostream>
     
    double add(double a, double b){
        return a + b;
    }
    namespace {
        double add( double a, double b){
            return a + b -0.2;
        }
    }
     
    int main()
    {
        std::cout << "result : " <<  ::add(1,2) << std::endl;
        return 0;
    }
