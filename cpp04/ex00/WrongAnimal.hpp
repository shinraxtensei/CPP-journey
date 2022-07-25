#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class WrongAnimal
{

	public:

		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal( WrongAnimal const & src );
		~WrongAnimal();

		WrongAnimal &		operator=( WrongAnimal const & rhs );

		std::string getType() const;
		void		setType(std::string const type);
		void makeSound() const;

	protected:
		std::string type;

};

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i );

#endif 