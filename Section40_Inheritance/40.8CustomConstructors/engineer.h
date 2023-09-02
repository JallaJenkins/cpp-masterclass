#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"

//Engineer is doing private inheritance

class Engineer : public Person
{
friend std::ostream& operator<<(std::ostream& out , const Engineer& operand);
public:
    Engineer();
    Engineer(std::string_view fullname,int age,
    const std::string_view address, int contract_count);
    ~Engineer();
    
    void build_something(){
      m_full_name = "John Snow"; // now private - OK
      m_age = 23; // now private - OK
      // m_address = "my house"; // private - Compiler error
    }

    
    int get_contract_count() const {
      return contract_count;
    }
    
private : 
    int contract_count{0};
};

#endif // ENGINEER_H