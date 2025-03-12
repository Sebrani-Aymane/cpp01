
#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    
}

void HumanB::attack(std::string name)
{
    std::cout << name<<"  attacks with their " <<Weapon::getType << std::endl;
}