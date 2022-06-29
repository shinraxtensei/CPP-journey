/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 09:19:27 by ahouari           #+#    #+#             */
/*   Updated: 2022/06/26 09:19:29 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

# define YELLOW			"\e[0;33m"

DiamondTrap::DiamondTrap(void)
{
	std::string name = "mamtourekhch";

	_setAttributes(name);
	ClapTrap::_name = name + "_clap_name";
	std::cout << YELLOW << "DiamondTrap mamtourekhch created." << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	_setAttributes(name);
	std::cout	<< YELLOW<< "DiamonTrap "<< this->_name<< ", Created"<< std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << YELLOW << "DiamondTrap " << this->_name  << "rest in rip"<< std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& instance) : ClapTrap(instance), ScavTrap(instance), FragTrap(instance)
{
	_setAttributes(instance._name);
	std::cout	<< YELLOW<< "DiamondTrap "<< this->_name<< " duplicated!"<< std::endl;
	return ;
}

void		DiamondTrap::_setAttributes(std::string name)
{
	this->_name = name;
	this->_hitPoints = FragTrap::hitPointsInit; 
	this->_energyPoints = ScavTrap::energyPointsInit;
	this->_attackDamage = FragTrap::attackDamageInit;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &right_hand_side)
{
	this->_name = right_hand_side.getName();
	this->_hitPoints = right_hand_side.getHitPoints();
	this->_energyPoints = right_hand_side.getHitPoints();
	this->_attackDamage = right_hand_side.getAttackDamage();
	return (*this);
}

void	DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << YELLOW << "I'm " << this->_name << " " << ClapTrap::_name << std::endl;
}

std::ostream &operator<<(std::ostream &outputFile, DiamondTrap const &i)
{
	outputFile	<< YELLOW<< i.getName()<< std::endl<< i.getHitPoints()<< std::endl<< i.getEnergyPoints()<< std::endl<< i.getAttackDamage()<< std::endl;
	return outputFile;
}
