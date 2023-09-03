
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"
#include <iostream>

CivilEngineer::CivilEngineer()
{
    std::cout << "Default constructor for Civil Engineer called\n";
}

// Good constructor design:

CivilEngineer::CivilEngineer(std::string_view fullname,int age,
    const std::string_view address, int contract_count, std::string_view speciality_param)
    :   Engineer(fullname, age, address, contract_count),
        m_speciality(speciality_param)
{
    std::cout << "Custom constructor for Civil Engineer called\n";
}

CivilEngineer::CivilEngineer(const CivilEngineer& source)
    : Engineer(source),
    m_speciality(source.m_speciality)
{
    std::cout << "Custom copy constructor for Civil Engineer called\n";
}


std::ostream& operator<<(std::ostream& out, const CivilEngineer& operand){
    
     out << "CivilEngineer [Full name : " << operand.get_full_name() <<
                    ",age : " << operand.get_age() << 
                    //",address : " << operand.get_address() <<
                    ",contract_count : " << operand.get_contract_count() <<
                    ",speciality : " << operand.m_speciality << "]";				
    return out;  
}


CivilEngineer::~CivilEngineer()
{
    std::cout << "Destructor for CivilEngineer called\n";
}