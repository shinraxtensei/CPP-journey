/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:50:25 by ahouari           #+#    #+#             */
/*   Updated: 2022/07/25 15:50:26 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <algorithm>



class Span
{
    private:
        std::vector<int> v;
        std::size_t size;
    public:


        class CannotStoreException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Cannot store this element");
                }
        };
        class CannotSpanException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Cannot Span this vector");
                }
        };


        Span();
        Span(unsigned int  n);
        Span(Span const  &other);
        Span& operator=(Span const &other);
        ~Span();
        
        void addNumber (int n);


        template <typename Iter>
        void addNumber(Iter begin, Iter end) {
            if (this->v.size() >= this->size) {
                throw Span::CannotStoreException();
            }
            this->v.insert(this->v.begin(), begin, end);
        }

        int shortestSpan();
        int longestSpan();



};