/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:50:44 by ahouari           #+#    #+#             */
/*   Updated: 2022/07/25 15:50:53 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main ()
{
    try
    {
        std::vector<int> v(10);
        for (int i = 0; i < 10; i++)
            v[i] = i;
        std::cout << "Vector: " << easyfind(v,5) << std::endl;

    }
    catch (std::exception& e)
    {
        std::cout << "\nException: " << " not found "<< std::endl;
    }


    try
    {
        std::list<int> l ;
        for (int i = 0; i < 10; i++)
            l.push_back(i);
        std::cout << "List: " << easyfind(l, 1) << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "\nException: " << " not found" << std::endl;
    }
    return 0;
}