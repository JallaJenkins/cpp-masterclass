#ifndef EXERCISE_H
#define EXERCISE_H
#include <iostream>
#include <string>

//YOUR CODE WILL GO BELOW THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE

class DividebyZeroException{
    
    std::string m_message;
    
public:
    DividebyZeroException(int a, int b)
    : m_message{std::string(("Error : Trying to divide ") 
        + std::to_string(a) 
        + std::string(" by ") 
        + std::to_string(b))}
    {}
    
    DividebyZeroException(const DividebyZeroException& source)
    : m_message(source.m_message)
    {}
    
    const std::string& what() const {
        return m_message;
    }
};

//YOUR CODE WILL GO ABOVE THIS LINE
//DON'T MODIFY ANYTHING BELOW THIS LINE

int divide(int a, int b);
void trouble(int num);

#endif // _EXERCISE_H
