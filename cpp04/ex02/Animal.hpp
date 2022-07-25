#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{

	public:

		Animal();
		Animal( Animal const & src );
		virtual ~Animal();

		Animal &		operator=( Animal const & rhs );

		std::string getType() const;
		void		setType(std::string const type);
		virtual void makeSound() const = 0;

	protected:
		std::string type;

};

std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif 