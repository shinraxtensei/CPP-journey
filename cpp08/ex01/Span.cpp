/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:50:27 by ahouari           #+#    #+#             */
/*   Updated: 2022/07/25 15:50:29 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"



Span::Span() { 
    this->size = 0;
}

Span::Span(unsigned int  n)  {
    if (n == 0) {
        throw Span::CannotStoreException();
    }
    this->size = n;
}

Span::Span(Span const &other) {*this = other;}
Span::~Span() {}

Span& Span::operator=(Span const &other)
{
    if (this != &other)
    {
        this->v = other.v;
        this->size = other.size;
    }
    return *this;
}

void Span::addNumber(int n)
{
    if (this->v.size() >= this->size)
        throw Span::CannotStoreException();
    this->v.push_back(n);
}


int Span::shortestSpan()
{
    if (this->v.size() < 2)
        throw Span::CannotSpanException();
    std::vector<int> v = this->v;
    std::sort(v.begin(), v.end());
    return v[1] - v[0];
}


int Span::longestSpan()
{
    if (this->v.size() < 2)
        throw Span::CannotSpanException();
    std::vector<int>::iterator min = std::min_element(this->v.begin(), this->v.end());
    std::vector<int>::iterator max = std::max_element(this->v.begin(), this->v.end());
    return *max - *min;
}