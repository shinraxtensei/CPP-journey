#include "bsp.hpp"

namespace bsp {

static Fixed cross_product(Point const &u, Point const &v) {
  return u.get_x() * v.get_y() - v.get_x() * u.get_y();
}

// p = m * d1 + n * d2
bool bsp(Point const a, Point const b, Point const c, Point const point) {
  Fixed denominator = cross_product(b - a, c - a);
  if (denominator == 0) {
    return false;
  }

  Fixed m = (cross_product(point - a, c - a) / denominator);
  Fixed n = -(cross_product(point - a, b - a) / denominator);
  return m > 0 && m < 1 && n > 0 && n < 1 && m + n < 1;
}
} // namespace bsp