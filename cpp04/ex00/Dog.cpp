#include "Dog.hpp"


Dog::Dog() : Animal() {
	std::cout << GREEN << "generic Dog created " <<RESET <<  std::endl;
	this->setType("generic");
}


Dog::Dog(std::string type) : Animal(type) {
	this->setType(type);
	std::cout << MAGENTA << "Dog " << type << " created" << RESET << std::endl;
}


Dog::Dog( const Dog & src ):Animal(src) {
	*this = src;
}



Dog::~Dog() {
	std::cout << RED << "Dog died" << RESET << std::endl;
}



Dog &				Dog::operator=( Dog const & obj )
{
	this->setType(obj.getType());
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & i )
{
	o << i.getType();
	return o;
}



void Dog::makeSound() const {
	std::cout << "haw haw haw" << std::endl;
}
