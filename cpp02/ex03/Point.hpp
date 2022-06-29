/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 11:24:26 by ahouari           #+#    #+#             */
/*   Updated: 2022/06/24 11:25:48 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
 private:
  Fixed const _x;
  Fixed const _y;

 public:
  const Fixed& getX(void) const;
  const Fixed& getY(void) const;

  Point& operator=(const Point& p);
  Point(void);
  Point(const float x, const float y);
  Point(const Point& p);
  ~Point(void);
};

float area(float x1, float y1, float x2, float y2, float x3, float y3);
bool bsp(const Point a, const Point b, const Point c, const Point point);


#endif