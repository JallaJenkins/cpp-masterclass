#include <iostream>
#include "utilities.h"
 
int main()
{
    std::string student_to_find{ "Kumar" };
    const char* students[]{ "Mary", "Steve", "Kumar", "Ahmed" };
    int index{ hunt_down(student_to_find.c_str(), students, 4) };
    std::cout << "index : " << index << std::endl;
 
   
    return 0;
}
