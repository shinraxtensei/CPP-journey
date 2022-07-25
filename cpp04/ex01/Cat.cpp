#include "Cat.hpp"

Cat::Cat() {
	std::cout << GREEN << "Constructor: A cat has been created" << RESET << std::endl;
	this->brain = new Brain();
	this->setType("Cat");
}

Cat::Cat( const Cat & src ):Animal(src) {
	*this = src;
}



Cat::~Cat() {
	delete this->brain;
	std::cout << RED << "Destructor: Cat has been destroyed" << RESET << std::endl;
}



Cat &				Cat::operator=( Cat const & obj )
{
	this->setType(obj.getType());
	this->brain = new Brain(*obj.brain);
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cat const & i )
{
	o << i.getType();
	return o;
}


void Cat::makeSound() const {
	std::cout << "meew grrr" << std::endl;
}

