/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:45:30 by ahouari           #+#    #+#             */
/*   Updated: 2022/06/11 16:45:30 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 
#include <fstream>
#include <string>
#include <iostream>

int main(int ac , char **av)
{
    if (ac == 4)
    {
        std::string newfilename = av[1] + std::string(".replace");
        std::ifstream file_in;
        std::ofstream file_out;
        std::string word_to_find = av[2];
        std::string word_to_replace = av[3];
        std::string data;
        file_in.open(av[1]);
        getline(file_in , data ,'\0');
        if (file_in.is_open())
        {
            file_in.open(newfilename);
            if (file_in.is_open())
            {
                std::string::size_type pos = 0;
                while ((pos = data.find(word_to_find, pos)) != std::string::npos)
                {
                    data.erase(pos, word_to_find.length());
                    data.insert(pos, word_to_replace);
                    pos += word_to_replace.length();
                }
                file_out.open(newfilename);
                file_out << data;
                file_out.close();
                file_in.close(); 
            }
            else
            {
                std::cout << "Error: can't open file" << std::endl;
            }
        }
        else
            std::cout << "Error: file not found" << std::endl;
    }
    else
        std::cout << "Error: wrong number of arguments" << std::endl;
    return (0);
}