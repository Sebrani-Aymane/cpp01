#ifndef HUMANB_HPP
#define HUMANB_GPP

#include "Weapon.hpp"
#include <string>

class HumanB {
    private:
    Weapon weapon;
    std::string name;
    public:
    void attack(std::string name);
    HumanB(std::string name);
    ~HumanB();

};

#endif