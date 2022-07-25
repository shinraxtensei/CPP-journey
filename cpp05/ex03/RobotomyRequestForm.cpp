#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
    std::cout << "RobotomyRequestForm created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form("RobotomyRequestForm", 72, 45), _target(src._target)
{
    std::cout << "RobotomyRequestForm created" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destroyed" << std::endl;
}


RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
    this->_target = obj._target;
    return *this;
}


void RobotomyRequestForm::action() const
{

    if((rand() < RAND_MAX / 2))
        std::cout << this->_target <<GREEN " has been robotomized successfully" RESET<< std::endl;
    else
        std::cout << this->_target <<RED "  the robotomy failed"  RESET<< std::endl;
}