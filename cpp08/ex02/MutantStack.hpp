/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:50:16 by ahouari           #+#    #+#             */
/*   Updated: 2022/07/25 15:50:17 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stack>
#include <vector>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T> {
    public:
        MutantStack() {};
        MutantStack(MutantStack const & other):std::stack<T>(other) {};
        ~MutantStack() {
            this->c.clear();
        };

        MutantStack & operator=(MutantStack const & obj) {
            if (obj != *this) {
                this->c = obj.c;
            }
            return *this;
        };


        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

        iterator begin() {return this->c.begin();};

        iterator end() {return this->c.end();};
        
        const_iterator begin() const {return this->c.cbegin();};
        
        const_iterator end() const {return this->c.cend();};
        
        reverse_iterator rbegin() {return this->c.rbegin();};
        
        reverse_iterator rend() {return this->c.rend();};
        
        const_reverse_iterator rbegin() const {return this->c.crbegin();};

        const_reverse_iterator rend() const {return this->c.crend();};




};