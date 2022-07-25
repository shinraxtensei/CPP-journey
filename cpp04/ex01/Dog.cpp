#include "Dog.hpp"

Dog::Dog() 
{
	std::cout << GREEN << "Constructor: A dog have been created"  << RESET << std::endl;
	this->brain = new Brain();
	this->setType("Dog");
}

Dog::Dog( const Dog & src ):Animal(src) 
{
	*this = src;
}


Dog::~Dog() 
{
	delete this->brain;
	std::cout  << RED << "Destructor: Dog have been destroyed" << RESET << std::endl;
}

Dog &				Dog::operator=( Dog const & obj )
{
	this->setType(obj.getType());
	this->brain = new Brain(*obj.brain);
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & i )
{
	o << i.getType();
	return o;
}


void Dog::makeSound() const {
	std::cout << "haw hwa haw" << std::endl;
}

