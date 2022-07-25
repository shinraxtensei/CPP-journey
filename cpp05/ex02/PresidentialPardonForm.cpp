#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 72, 45)
{
    std::cout << "PresidentialPardonForm created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 72, 45), _target(target)
{
    std::cout << "PresidentialPardonForm created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &src) : Form("PresidentialPardonForm", 72, 45), _target(src._target)
{
    std::cout << "PresidentialPardonForm created" << std::endl;
}


PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destroyed" << std::endl;
}




PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & obj) {
    this->_target = obj._target;
    return *this;
}

void PresidentialPardonForm::action() const
{
    std::cout   << this->_target <<GREEN " has been pardoned by his highness anass." RESET<< std::endl;
}