    #include <iostream>
    #include "utilities.h"
     
    int main()
    {
        auto message = concatenate(11,22ul);
        std::cout << "result : " << message << std::endl;
        return 0;
    }
