    #include <iostream>
    #include "utilities.h"
     
// template <typename R, typename T, typename U>
//     R add ( T a , U b) {
//         return a + b;
//     }

    int main()
    {
        double x{33};
        double y{33.6};
        double result = add(x,y);
        // std::cout << "result : " << result << std::endl;
        return 0;
    }

// template <typename T>
//     T add ( T a , T b) {
//         return a + b;
//     }