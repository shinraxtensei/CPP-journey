#include "Intern.hpp"
#include <string>

Intern::Intern()
{
    std::cout << "Intern created" << std::endl;
}

Intern::Intern(Intern const &src)
{
    *this = src;
}
Intern::~Intern()
{
    std::cout << "Intern destroyed" << std::endl;
}

Intern & Intern::operator=(Intern const & obj) {
    (void) obj;
    return *this;
}

const char * Intern::FromNotFound::what() const throw() {
    return "From Not Found";
}



Form * Intern::createPresident(std::string target)
{
    return new PresidentialPardonForm(target);
}

Form * Intern::createRobotomy(std::string target)
{
    return new RobotomyRequestForm(target);
}
Form * Intern::createShrubbery(std::string target)
{
    return new ShrubberyCreationForm(target);
}



Form	*Intern::makeForm(std::string name, std::string target)
{
	std::string namesArray[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	
	Form	*(Intern::*createForm[3])(std::string target) = {	&Intern::createShrubbery,
																		&Intern::createRobotomy,
																		&Intern::createPresident};
    int  i = -1 ;
    while(++i <= 4 && name != namesArray[i]);
    return (i <= 4) ? ((this->*createForm[i])(target)) : throw Intern::FromNotFound();
}