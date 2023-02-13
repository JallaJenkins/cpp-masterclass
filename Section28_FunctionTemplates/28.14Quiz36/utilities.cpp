    #include "utilities.h"
     
    //Function definition
    template <typename T, typename P>
    auto concatenate(T a, P b) {
       return (std::to_string(a) + std::to_string(b));
    }