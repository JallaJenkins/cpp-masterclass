#ifndef CIVIL_ENGINEER_H
#define CIVIL_ENGINEER_H

#include "engineer.h"
class CivilEngineer : public Engineer
{
    friend std::ostream& operator<<(std::ostream&, const CivilEngineer& operand);
public:
    CivilEngineer();
    ~CivilEngineer();
    
    void build_road(){
        // get_full_name(); // Compiler error
        // m_full_name = "Daniel Gray"; //Compiler error
        // m_age = 45; // Compiler error

        add(10, 20);
        add(10, 20, 30);
    }

    // using Person::do_something; // private in Engineer - compiler error
	
private : 
    std::string m_speciality{"None"};

};

#endif // CIVIL_ENGINEER_H