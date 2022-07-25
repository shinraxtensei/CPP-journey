#include "WrongCat.hpp"


WrongCat::WrongCat() : WrongAnimal() {	
	this->setType("generic");
	std::cout << CYAN << " generic Cat created " << RESET << std::endl;

}
WrongCat::WrongCat(std::string type) : WrongAnimal(type) {
	this->setType(type);
	std::cout << CYAN << "Cat " << type << " created" << RESET << std::endl;
}

WrongCat::WrongCat( const WrongCat & src ):WrongAnimal(src) {
	*this = src;
}


WrongCat::~WrongCat() {
		std::cout << RED << "Cat died" << RESET <<  std::endl;
}


WrongCat &				WrongCat::operator=( WrongCat const & obj )
{
	this->setType(obj.getType());
	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongCat const & i )
{
	o << i.getType();
	return o;
}

