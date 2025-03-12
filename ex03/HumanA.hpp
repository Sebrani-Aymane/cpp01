#ifndef HUMANA_HPP
#define HUMANA_GPP

#include "Weapon.hpp"
#include <iostream>

class HumanA {
    private:
    Weapon &weapon;
    std::string name;
    public:
    void attack();

    HumanA(std::string HumanName,Weapon& WeaponType);
    ~HumanA();

};

#endif