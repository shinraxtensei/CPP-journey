/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 09:19:40 by ahouari           #+#    #+#             */
/*   Updated: 2022/06/26 09:19:41 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public  ClapTrap
{
	private:

	protected:
		static int hitPointsInit;
		static int energyPointsInit;
		static int attackDamageInit;

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& instance);
		~ScavTrap(void);

		ScavTrap	&operator=(ScavTrap const &right_hand_side);

		void	attack(std::string const & target);
		void	guardGate(void);
};

std::ostream &operator<<(std::ostream &outputFile, ScavTrap const &i);

#endif
