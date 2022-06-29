/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 11:26:10 by ahouari           #+#    #+#             */
/*   Updated: 2022/06/24 11:37:05 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


float area(float x1, float y1, float x2, float y2, float x3, float y3) 
{
    return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}


bool bsp(const Point a, const Point b, const Point c, const Point point)
{
    float area1 = area(a.getX().toFloat(), a.getY().toFloat(), b.getX().toFloat(), b.getY().toFloat(), c.getX().toFloat(), c.getY().toFloat());
    float area2 = area(a.getX().toFloat(), a.getY().toFloat(), b.getX().toFloat(), b.getY().toFloat(), point.getX().toFloat(), point.getY().toFloat());
    float area3 = area(a.getX().toFloat(), a.getY().toFloat(), c.getX().toFloat(), c.getY().toFloat(), point.getX().toFloat(), point.getY().toFloat());
    float area4 = area(b.getX().toFloat(), b.getY().toFloat(), c.getX().toFloat(), c.getY().toFloat(), point.getX().toFloat(), point.getY().toFloat());
    
    if (area1 == area2 + area3 + area4)
        return true;
    return false;
}