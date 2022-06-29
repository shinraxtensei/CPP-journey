/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 09:19:02 by ahouari           #+#    #+#             */
/*   Updated: 2022/06/26 09:19:05 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"
#include <iostream>

# define BOLD_H_MAGENTA	"\e[1;95m"

int ScavTrap::hitPointsInit = 100;
int ScavTrap::energyPointsInit = 50;
int ScavTrap::attackDamageInit = 20;

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->setHitPoints(ScavTrap::hitPointsInit);
	this->setEnergyPoints(ScavTrap::energyPointsInit);
	this->setAttackDamage(ScavTrap::attackDamageInit);

	std::cout << BOLD_H_MAGENTA << "ScavTrap " << this->getName() << ", a brand new ScavTrap, is here!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(void)
{
	this->setHitPoints(ScavTrap::hitPointsInit);
	this->setEnergyPoints(ScavTrap::energyPointsInit);
	this->setAttackDamage(ScavTrap::attackDamageInit);

	std::cout << BOLD_H_MAGENTA << "Scav Trap mamtourkhch has been created ! " << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout 	<< BOLD_H_MAGENTA << "ScavTrap " << this->getName() << "rest in rip ..." << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const& instance) : ClapTrap(instance)
{
	std::cout	<< BOLD_H_MAGENTA << "ScavTrap "<< this->_name << " duplicated!" << std::endl;
	return ; 
}

ScavTrap &ScavTrap::operator=(ScavTrap const &right_hand_side)
{
	this->_name = right_hand_side.getName();
	this->_hitPoints = right_hand_side.getHitPoints();
	this->_energyPoints = right_hand_side.getHitPoints();
	this->_attackDamage = right_hand_side.getAttackDamage();
	return (*this);
}

void	ScavTrap::attack(std::string const & target)
{

	if (this->_energyPoints < 10)
	{
		std::cout << BOLD_H_MAGENTA << "I'm too tired to attack " << target << "!" << std::endl;
		return ;
	}
	else
	{
		std::cout << BOLD_H_MAGENTA << this->_name << " attacks " << target << " causing " << this->_attackDamage << " damage !" << std::endl;
		this->_energyPoints -= 10;
		return ;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout	<< BOLD_H_MAGENTA<< "Beeep Scavtrap "<< this->getName()<< " is in Gate keep mode "<< std::endl;
}

std::ostream &operator<<(std::ostream &outputFile, ScavTrap const &i)
{
	outputFile	<< BOLD_H_MAGENTA<< i.getName()<< std::endl<< "Hit points: "<< i.getHitPoints()<< std::endl<< "Energy points: "<< i.getEnergyPoints()<< std::endl<< "Attack damage: "<< i.getAttackDamage()<< std::endl;
	return outputFile;
}
