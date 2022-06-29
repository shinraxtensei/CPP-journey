/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:42:18 by ahouari           #+#    #+#             */
/*   Updated: 2022/06/28 10:58:32 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    
    std::cout << GREEN << "created by the newzombie function" << RESET << std::endl;
    Zombie *zombie1 = newZombie("Bob1");
    zombie1->announce();
    
    std::cout << GREEN << "created by the randomchump function" << RESET << std::endl;
    randomChump("hamid");
    delete zombie1;

    return 0;
}