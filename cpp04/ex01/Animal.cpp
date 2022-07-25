#include "Animal.hpp"


Animal::Animal() {this->setType("generic");}

Animal::Animal( Animal const & src ) {*this = src;}


Animal::~Animal() {	std::cout << RED  << "Destructor: Animal have been destroyed" << RESET << std::endl;}


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
}
