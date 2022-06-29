/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 09:19:49 by ahouari           #+#    #+#             */
/*   Updated: 2022/06/26 09:25:25 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"



# define H_RESET	"\e[0m"

int main(void)
{
    FragTrap hamid("hamid");
    FragTrap said("said");
    hamid.highFivesGuys();
    std::cout << H_RESET << said.getName() << ": salam ou3alikoum" << std::endl;
    std::cout << hamid.getName() << ": wa3alikoum salam" << std::endl;
    std::cout  << said.getName() << ": ara derhem" << std::endl;
    std::cout  << hamid.getName() << ": ma3endich" << std::endl;
    std::cout  << said.getName() << ":ara garo" << std::endl;
    std::cout  << hamid.getName() << ": ma3endich" << std::endl;
    std::cout << said.getName() << ": hak lfa9ira tmok" << std::endl;
    said.attack(hamid.getName());
}
