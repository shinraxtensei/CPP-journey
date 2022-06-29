/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:45:38 by ahouari           #+#    #+#             */
/*   Updated: 2022/06/11 16:45:38 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// creat all the functions
void Harl::debug(void) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<  std::endl;
}
void Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." <<  std::endl;
}
void Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now." <<  std::endl;
}


Harl::Harl(void) {}
Harl::~Harl(void) {}


void Harl::complain(std::string level) {

    std::string levels[] = {"debug", "info", "warning", "error"};
    void    (Harl::*functionPointer[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int i  = -1;
    // while(++i < 4) {
    //     if (levels[i] == level) {
    //         (this->*functionPointer[i])();
    //         return ;
    //     }
    // }
    while(++i < 4 && levels[i] != level);
    (this->*functionPointer[i])();
    
}
