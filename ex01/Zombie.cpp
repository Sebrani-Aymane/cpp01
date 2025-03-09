
#include "Zombie.hpp"

void Zombie::annouce(){
std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;

}

void Zombie::setName(std::string name)
{
    this->name = name;
}
Zombie::Zombie(){}
Zombie::~Zombie(){std::cout << this->name <<   " deleted" << std:: endl;}
