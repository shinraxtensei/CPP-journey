/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 11:24:53 by ahouari           #+#    #+#             */
/*   Updated: 2022/06/24 11:24:53 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FIXED_H_
# define FIXED_H_

#include <iostream>
#include <ostream>

#include <iostream>
#include <cmath>

class Fixed {
public:
  Fixed(void);
  Fixed(const int value);
  Fixed(const float value);
  Fixed(const Fixed &fixed);
  Fixed &operator=(const Fixed &fixed);
  ~Fixed(void);

  bool operator==(const Fixed &fixed) const;
  bool operator>(const Fixed &fixed) const;
  bool operator<(const Fixed &fixed) const;
  bool operator>=(const Fixed &fixed) const;
  bool operator<=(const Fixed &fixed) const;
  bool operator!=(const Fixed &fixed) const;

  Fixed operator+(const Fixed &fixed) const;
  Fixed operator-(const Fixed &fixed) const;
  Fixed operator*(const Fixed &fixed) const;
  Fixed operator/(const Fixed &fixed) const;

  Fixed &operator++(void);
  Fixed &operator--(void);
  Fixed operator++(int);
  Fixed operator--(int);

  static const Fixed &max(Fixed &f1, Fixed &f2);
  static const Fixed &max(const Fixed &f1, const Fixed &f2);
  static const Fixed &min(Fixed &f1, Fixed &f2);
  static const Fixed &min(const Fixed &f1, const Fixed &f2);

  int getRawBits(void) const;
  void setRawBits(int const raw);

  float toFloat(void) const;
  int toInt(void) const;
  

private:
  static const int kFractionalBits = 8;
  int value_;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif 