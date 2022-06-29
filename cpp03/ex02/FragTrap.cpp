/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 09:19:57 by ahouari           #+#    #+#             */
/*   Updated: 2022/06/26 09:19:58 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"


# define H_RED			"\e[0;91m"

int FragTrap::hitPointsInit = 100;
int FragTrap::energyPointsInit = 100;
int FragTrap::attackDamageInit = 30;

FragTrap::FragTrap(void)
{
	this->setHitPoints(FragTrap::hitPointsInit);
	this->setEnergyPoints(FragTrap::energyPointsInit);
	this->setAttackDamage(FragTrap::attackDamageInit);

	std::cout << H_RED << "FragTrap mamtourkhch created !" << std::endl;
	return ;
}


FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->setHitPoints(FragTrap::hitPointsInit);
	this->setEnergyPoints(FragTrap::energyPointsInit);
	this->setAttackDamage(FragTrap::attackDamageInit);

	std::cout	<< H_RED<< "FragTrap " << this->getName() << " Created " << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout	<< H_RED << "FragTrap " << this->getName() << " rip in peace " << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const& instance): ClapTrap(instance)
{
	std::cout 	<< H_RED << "FragTrap " << this->_name<< " DUPLICATED!"<< std::endl;
	return ;
}

FragTrap &FragTrap::operator=(FragTrap const &right_hand_side)
{
	this->_name = right_hand_side.getName();
	this->_hitPoints = right_hand_side.getHitPoints();
	this->_energyPoints = right_hand_side.getHitPoints();
	this->_attackDamage = right_hand_side.getAttackDamage();
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout	<< H_RED << "Hey, guys! Hi five!!" << std::endl;
	return ;
}

std::ostream &operator<<(std::ostream &outputFile, FragTrap const &i)
{
	outputFile	<< H_RED << i.getName() << std::endl << i.getHitPoints() << std::endl << i.getEnergyPoints() << std::endl << i.getAttackDamage() << std::endl;
	return outputFile;
}
