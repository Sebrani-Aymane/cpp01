/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 21:14:14 by asebrani          #+#    #+#             */
/*   Updated: 2025/03/12 05:55:07 by asebrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "HumanA.hpp"

HumanA::HumanA(std::string HumanName,Weapon& WeaponType) : name(HumanName) ,weapon(WeaponType)
{   
}

void HumanA::attack()
{
    std::cout << name<<"  attacks with their " << Weapon::getType << std::endl;
}

