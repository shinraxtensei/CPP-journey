/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:50:40 by ahouari           #+#    #+#             */
/*   Updated: 2022/07/25 15:51:01 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>
#include <list>

template <typename T>
int easyfind(T& container , int value)
{
    typename T::iterator  it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw std::exception();
    return std::distance(container.begin(), it);
}

