/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 09:20:02 by ahouari           #+#    #+#             */
/*   Updated: 2022/06/26 09:20:04 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

# define BOLD_H_CYAN	"\e[1;96m"

ClapTrap::ClapTrap(void) : _name("mamtourekhch"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << BOLD_H_CYAN << "ClapTrap mamtourekhch created!" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << BOLD_H_CYAN << "Rest in peace, " << this->_name << " ..." << std::endl;

	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout	<< BOLD_H_CYAN << "ClapTrap " << this->getName() << " created" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const& instance)
{
	*this = instance;
	std::cout	<< BOLD_H_CYAN << "ClapTrap " << this->_name<< " duplicated!" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &right_hand_side)
{
	this->_name = right_hand_side.getName();
	this->_hitPoints = right_hand_side.getHitPoints();
	this->_energyPoints = right_hand_side.getHitPoints();
	this->_attackDamage = right_hand_side.getAttackDamage();
	return (*this);
}

void	ClapTrap::attack(std::string const & target)
{

	if ( this->_energyPoints < 10)
	{
		std::cout << BOLD_H_CYAN << "I'm too tired to attack " << target << "!" << std::endl;
		return ;
	}
	else
	{
		std::cout << BOLD_H_CYAN << this->_name << " attacks " << target << " causing " << this->_attackDamage << " damage !" << std::endl;
		this->_energyPoints -= 10;
		return ;
	}

}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints - amount <= 0)
	{
		this->_hitPoints = 0;
		std::cout	<< BOLD_H_CYAN << "ClapTrap "<< this->_name<< " is dead "<< std::endl;
	}
	else
	{
		this->_hitPoints -= amount;
		std::cout	<< BOLD_H_CYAN << "ClapTrap "<< this->_name<< " takes "<< amount<< " of damage "<< std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_energyPoints += amount;
	this->_hitPoints += amount;
	std::cout	<< BOLD_H_CYAN<< "ClapTrap gains " << amount << " of repair!! " << this->_name << " is full of energy now!" << std::endl;
}


void		ClapTrap::setName(std::string name){this->_name = name;}
void		ClapTrap::setHitPoints(unsigned int amount){this->_hitPoints = amount;}
void		ClapTrap::setEnergyPoints(unsigned int amount){this->_energyPoints = amount;}
void		ClapTrap::setAttackDamage(unsigned int amount){this->_attackDamage = amount;}
std::string	ClapTrap::getName(void)const{return (this->_name);}
unsigned int	ClapTrap::getHitPoints(void)const{return (this->_hitPoints);}
unsigned int	ClapTrap::getEnergyPoints(void)const{return (this->_energyPoints);}
unsigned int	ClapTrap::getAttackDamage(void)const{return (this->_attackDamage);}


std::ostream &operator<<(std::ostream &outputFile, ClapTrap const &i)
{
	outputFile	<< BOLD_H_CYAN << i.getName() << std::endl << "Hit points: "<< i.getHitPoints()<< std::endl<< "Energy points: "<< i.getEnergyPoints()<< std::endl<< "Attack damage: "<< i.getAttackDamage()<< std::endl;
	return outputFile;
}