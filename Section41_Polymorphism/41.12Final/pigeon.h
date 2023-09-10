#ifndef PIGEON_H
#define PIGEON_H
#include "bird.h"
class Pigeon : public Bird
{
public:
    Pigeon() = default;
    Pigeon(std::string_view wing_color, std::string_view description);
    virtual ~Pigeon();
    
    virtual void coo() const{
        std::cout << "Pigeon::coo called for pigeon : " << m_description << std::endl;
    }

    // Compiler error - cannot override final function even if marked virtual
    /*
    void fly() const override{
        std::cout << "Bird::fly() called for bird : " << m_description << std::endl;
    }
    */

};

#endif // PIGEON_H
