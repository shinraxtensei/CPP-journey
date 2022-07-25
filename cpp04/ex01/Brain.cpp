#include "Brain.hpp"


Brain::Brain() {
	std::cout << "Constructor: A brain has been created" << std::endl;
}

Brain::Brain( const Brain & src ) {
	*this = src;
}


Brain::~Brain() {
	std::cout << "Destructor: Brain has been destroyed" << std::endl;
}



Brain &				Brain::operator=( Brain const & obj ) {
	std::string *ideas = obj.getIdeas();
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ideas[i];
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Brain const & i ) {
	(void) i;
	std::cout << "this is a brain" << std::endl;
	return o;
}

std::string *Brain::getIdeas() const {
	return (std::string *)this->ideas;
}
