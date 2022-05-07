#include "Fixed.hpp"

Fixed::Fixed(void) : value_(0) {
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
  std::cout << "Copy constructor called" << std::endl;
  // value_ = fixed.getRawBits();
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
  std::cout << "getRawBits member function called" << std::endl;
  return value_;
}

void Fixed::setRawBits (int const raw) {
  std::cout << "setRawBits member function called" << std::endl;
  value_ = raw;
}