#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << CYAN << " generic Cat created " << RESET << std::endl;
	this->setType("generic");
}

Cat::Cat(std::string type) : Animal(type) {
	this->setType(type);
	std::cout << CYAN << "Cat " << type << " created" << RESET << std::endl;
}

Cat::Cat( const Cat & src ):Animal(src) {
	*this = src;
}





Cat::~Cat()  {
	std::cout << RED << "Cat died" << RESET <<  std::endl;
}



Cat &				Cat::operator=( Cat const & obj )
{
	this->setType(obj.getType());
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
