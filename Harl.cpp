/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 21:55:46 by asebrani          #+#    #+#             */
/*   Updated: 2025/03/15 01:33:46 by asebrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" <<std::endl;
}

void Harl::info(){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"<<
std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month."<< std::endl;
}

void Harl::error(){
    std::cout << "This is unacceptable! I want to speak to the manager now." <<std::endl;
}

void Harl::complain(std::string level){
    std::string levels[4]={"debug" ,"info" ,"warning","error"};
    
    typedef void (Harl::*func)(void);
    func to_call[4]={&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
    for (int i =0;i <4 ;i++)
    {
        if (level == levels[i])
            (this->*to_call[i])();
    }
}
