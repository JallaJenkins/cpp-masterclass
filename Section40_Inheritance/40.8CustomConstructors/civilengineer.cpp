
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


// Bad constructor design 1:
/*
CivilEngineer::CivilEngineer(std::string_view fullname,int age,
    const std::string_view address, int contract_count, std::string_view speciality_param)
{
    m_full_name = fullname;
    m_age = age;
    // m_address = address; // Compiler error - m_address is private
    m_speciality = speciality_param;
    std::cout << "Custom constructor for Civil Engineer called\n";
}
*/

// Bad constructor design 2:
/*
CivilEngineer::CivilEngineer(std::string_view fullname,int age,
    const std::string_view address, int contract_count, std::string_view speciality_param)
    :   m_full_name(fullname), m_age (age), m_address (address), 
        contract_count(contract_count),
        m_speciality(speciality_param)
{
    std::cout << "Custom constructor for Civil Engineer called\n";
}
*/

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
}