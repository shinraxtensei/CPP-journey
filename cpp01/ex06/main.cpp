/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:46:52 by ahouari           #+#    #+#             */
/*   Updated: 2022/06/11 16:46:52 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int ac , char **av)
{
    if (ac == 2)
    {
        Harl hard; 
        char complaints[4][10] = { "debug", "info", "warning", "error" };
        int i = -1;

        while(strcmp(complaints[++i], av[1]) && i <= 4);
        switch (i)
        {
            case 0:
                hard.complain(complaints[0]);
            case 1:
                hard.complain(complaints[1]);
            case 2: 
                hard.complain(complaints[2]);   
            case 3:
                hard.complain(complaints[3]);
                break;
            default:
                std::cout << "Invalid input" << std::endl;

            return(0);
    }
    else
        {
            std::cout << "invalid args " << std::endl;
            return (1);
        }
    return 0;
}