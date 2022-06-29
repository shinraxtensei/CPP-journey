/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 11:25:16 by ahouari           #+#    #+#             */
/*   Updated: 2022/06/24 11:25:37 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H_
# define FIXED_H_

#include <iostream>

class Fixed 
{
    private :
        int _fixedPointValue;
        static const int _fractionalBits;
    public:
        Fixed();
        Fixed(const Fixed &fixed);
        ~Fixed();
        Fixed &operator=(const Fixed &fixed);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif