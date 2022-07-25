#include "Animal.hpp"

Animal::Animal() {
	std::cout << GREEN << "generic Animal Created " << RESET << std::endl; 
	this->setType("generic");
}

Animal::Animal(std::string type) {
	this->setType(type);
	std::cout << GREEN << "Animal " << this->getType() << " created" << RESET << std::endl; 
}


Animal::Animal( Animal const & src ) {
	*this = src;
}




Animal::~Animal() {
	std::cout  << RED << "Animal " << this->getType() << " died , RIP" << RESET << std::endl;
}




Animal &				Animal::operator=( Animal const & obj ) {
	this->setType(obj.getType());
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Animal const & i ) {
	o << i.getType();
	return o;
}


std::string Animal::getType() const {
	return this->type;
}


void Animal::setType(std::string type) {
	this->type = type;
}

void Animal::makeSound() const {
	std::cout  << "..." << std::endl;
}
