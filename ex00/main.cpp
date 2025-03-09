/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 22:41:18 by asebrani          #+#    #+#             */
/*   Updated: 2025/03/08 02:47:27 by asebrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    Zombie *zombie1 = newZombie("Heap zombie");
    zombie1->annouce();
    randomChump("stack Zombie");
    delete zombie1;
}