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

    public:
      using Person::add;

    protected:
      using Person::get_full_name;
      using Person::get_age;
      using Person::get_address;
      // using Person::m_address; // originally private - compiler error

    int get_contract_count() const {
      return contract_count;
    }
    
private : 
    int contract_count{0};
};

#endif // ENGINEER_H