#ifndef FIXED_H_
# define FIXED_H_

#include <iostream>

class Fixed {
public:
  Fixed(void);
  Fixed(const Fixed &fixed);
  Fixed &operator=(const Fixed &fixed);
  ~Fixed(void);

  int getRawBits(void) const;
  void setRawBits(int const raw);

private:
  static const int kFractionalBits = 8;
  int value_;
};

#endif