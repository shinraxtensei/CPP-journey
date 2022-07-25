/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:50:19 by ahouari           #+#    #+#             */
/*   Updated: 2022/07/25 15:50:22 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp" 


int main()
{

// begin , end
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << " top : " << mstack.top() << std::endl;
mstack.pop();
std::cout  << " size : " << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::stack<int> s(mstack);

std::cout << "------------------------------" << std::endl;

// rbegin , rend
MutantStack<int> mstack1;
mstack1.push(5);
mstack1.push(17);
std::cout << " top : " << mstack1.top() << std::endl;
mstack1.pop();
std::cout << " size : " << mstack1.size() << std::endl;
mstack1.push(3);
mstack1.push(5);
mstack1.push(737);
//[...]
mstack1.push(0);
MutantStack<int>::reverse_iterator it1 = mstack1.rbegin();
MutantStack<int>::reverse_iterator it1e = mstack1.rend();
++it1;
--it1;
while (it1 != it1e)
{
std::cout << *it1 << std::endl;
++it1;
}
std::stack<int> s1(mstack1);


std::cout << "------------------------------" << std::endl;

return 0;
}
