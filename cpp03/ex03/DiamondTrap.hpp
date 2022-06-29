/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 09:19:21 by ahouari           #+#    #+#             */
/*   Updated: 2022/06/26 09:20:39 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
	std::string	_name;
	void		_setAttributes(std::string name);
public:
	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const& instance);
	~DiamondTrap(void);

	void	attack(std::string const & target);
	DiamondTrap	&operator=(DiamondTrap const &right_hand_side);

	void whoAmI(void);
};

std::ostream &operator<<(std::ostream &outputFile, DiamondTrap const &i);

#endif
