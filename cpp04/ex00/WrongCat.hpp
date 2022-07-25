#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"
# include <iostream>
# include <string>

class WrongCat : public WrongAnimal
{

	public:

		WrongCat();
		WrongCat(std::string type);
		WrongCat( WrongCat const & src );
		~WrongCat();

		WrongCat &		operator=( WrongCat const & rhs );
		void MakeSound() const;
};

std::ostream &			operator<<( std::ostream & o, WrongCat const & i );

#endif