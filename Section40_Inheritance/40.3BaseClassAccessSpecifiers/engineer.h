#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"

//Engineer is doing private inheritance

class Engineer : private Person
{
friend std::ostream& operator<<(std::ostream& out , const Engineer& operand);
public:
    Engineer();
    ~Engineer();
    
    void build_something(){
      m_full_name = "John Snow"; // now private - OK
      m_age = 23; // now private - OK
      // m_address = "my house"; // private - Compiler error
    }
    
private : 
    int contract_count{0};
};

#endif // ENGINEER_H