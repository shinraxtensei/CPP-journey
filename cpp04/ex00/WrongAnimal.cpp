#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal() {
	this->setType("generic");
	std::cout << GREEN << "generic WrongAnimal Created " << RESET << std::endl; 
}

WrongAnimal::WrongAnimal(std::string type) {
	this->setType(type);
	std::cout << GREEN << "Animal " << this->getType() << " created" << RESET << std::endl; 
}

WrongAnimal::WrongAnimal( WrongAnimal const & src ) {
	*this = src;
}


WrongAnimal::~WrongAnimal() {
	std::cout  << RED << "WrongAnimal " << this->getType() << " died , RIP" << RESET << std::endl;
}


WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & obj ) {
	this->setType(obj.getType());
	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i ) {
	o << i.getType();
	return o;
}



std::string WrongAnimal::getType() const {
	return this->type;
}


void WrongAnimal::setType(std::string type) {
	this->type = type;
}

void WrongAnimal::makeSound() const {
	std::cout << "..." << std::endl;
}
