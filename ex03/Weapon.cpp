#include "Weapon.hpp"


Weapon::Weapon(std::string name){
    type = name;
}

const std::string& Weapon::getType()
{
    return type;
}

void Weapon:: setType(std::string name)
{
    type = name;
}