/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:46:35 by ahouari           #+#    #+#             */
/*   Updated: 2022/06/11 16:46:35 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>

class Harl {
    private:
        void debug(void);
        void info(void);
        void warning(void );
        void error(void );
    public:
        Harl(void);
        ~Harl(void);
        void complain( std::string level );
};

#endif