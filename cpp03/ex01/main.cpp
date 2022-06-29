/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 09:21:08 by ahouari           #+#    #+#             */
/*   Updated: 2022/06/26 09:24:27 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

# define H_RESET	"\e[0m"

int main(void)
{
    ScavTrap hamid("hamid");
    ScavTrap said("said");
    hamid.guardGate();
    std::cout << H_RESET << said.getName() << ": salam ou3alikoum" << std::endl;
    std::cout << hamid.getName() << ": wa3alikoum salam" << std::endl;
    std::cout  << said.getName() << ": ara derhem" << std::endl;
    std::cout  << hamid.getName() << ": ma3endich" << std::endl;
    std::cout  << said.getName() << ":ara garo" << std::endl;
    std::cout  << hamid.getName() << ": ma3endich" << std::endl;
    std::cout << said.getName() << ": hak lfa9ira tmok" << std::endl;
    said.attack(hamid.getName());
}
