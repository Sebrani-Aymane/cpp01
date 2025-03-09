/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 22:45:13 by asebrani          #+#    #+#             */
/*   Updated: 2025/03/08 02:47:27 by asebrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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