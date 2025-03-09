/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 22:41:28 by asebrani          #+#    #+#             */
/*   Updated: 2025/03/08 02:47:27 by asebrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
    private:
        std::string name;
    public:
    Zombie();
    void annouce();
    ~Zombie();
    void setName(std::string name);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
