#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>
#include <ostream>

class Fixed {
public:
  Fixed(void);
  Fixed(const int value);
  Fixed(const float value);
  Fixed(const Fixed &fixed);
  Fixed &operator=(const Fixed &fixed);
  ~Fixed(void);

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