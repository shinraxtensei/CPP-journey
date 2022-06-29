/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:43:49 by ahouari           #+#    #+#             */
/*   Updated: 2022/06/11 16:43:50 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "the memory address of the string is  : " << &brain << std::endl;
    std::cout << "the memory address held by stringPTR is : " << stringPTR << std::endl;
    std::cout << "the memory address held by stringREF is : " << &stringREF << std::endl;

    std::cout << "\nthe value of the string is : " << brain << std::endl;
    std::cout << "the value pointed by stringPTR is : " << *stringPTR << std::endl;
    std::cout << "the value pointed to by stringREF is : " << stringREF << std::endl;
    return 0;
}