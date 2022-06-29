/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 11:26:34 by ahouari           #+#    #+#             */
/*   Updated: 2022/06/24 11:26:34 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Fixed.hpp"

Fixed::Fixed(void) : value_(0) {
  std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(const int value)
{
  this->value_ = value * (1 << kFractionalBits);
  std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
  this->value_ = std::roundf(value * (1 << kFractionalBits));
  std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
  std::cout << "Copy constructor called" << std::endl;
  *this = fixed;
}

Fixed& Fixed::operator=(const Fixed &fixed) {
  std::cout << "Copy assignment operator called" << std::endl;
  value_ = fixed.getRawBits();
  return *this;
}

Fixed::~Fixed(void) {
  std::cout << "Destructor called" << std::endl;
}


int Fixed::getRawBits (void) const {
  return value_;
}

void Fixed::setRawBits (int const raw) {
  value_ = raw;
}

float Fixed::toFloat(void) const {
  return static_cast<float>(value_) / (1 << kFractionalBits);
}

int Fixed::toInt(void) const {
  return value_ / (1 << kFractionalBits);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
  os << fixed.toFloat();
  return os;
}