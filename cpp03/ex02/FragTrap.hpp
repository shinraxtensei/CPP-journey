/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 09:19:52 by ahouari           #+#    #+#             */
/*   Updated: 2022/06/26 09:19:54 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:

	protected:
		static int hitPointsInit;
		static int energyPointsInit;
		static int attackDamageInit;

	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const& instance);
		~FragTrap(void);

		FragTrap	&operator=(FragTrap const &right_hand_side);

		void	 highFivesGuys(void);
};

std::ostream &operator<<(std::ostream &outputFile, FragTrap const &i);

#endif
