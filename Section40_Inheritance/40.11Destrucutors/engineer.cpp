#include "person.h"
#include "engineer.h"
#include <iostream>

Engineer::Engineer()
{
    std::cout << "Default constructor for Engineer called\n";
}

Engineer::Engineer(std::string_view fullname,int age,
    const std::string_view address, int contract_count_param)
    :   Person(fullname, age, address),
        contract_count(contract_count_param)
{
    std::cout << "Custom constructor for Engineer called\n";
}


// Best design, takes advantage of Person copy constructor
Engineer::Engineer(const Engineer& source)
    : Person(source),
    contract_count(source.contract_count)
{
    std::cout << "Custom copy constructor for Engineer called\n";
}

std::ostream& operator<<(std::ostream& out , const Engineer& operand){
     out << "Engineer [Full name: " << operand.get_full_name() <<
                    ",age: " << operand.get_age() << 
                    ",address: " << operand.get_address() <<
                    ",contract_count: " << operand.contract_count << "]";
    return out;   
}


Engineer::~Engineer()
{
    std::cout << "Destructor for Engineer called\n";
}