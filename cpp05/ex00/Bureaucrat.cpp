#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("") , _grade(0)
{
    std::cout << "Bureaucrat created" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name) , _grade(grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "Bureaucrat created" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name) , _grade(src._grade)
{
    std::cout << "Bureaucrat created" << std::endl;
}


Bureaucrat & Bureaucrat::operator=(Bureaucrat const & obj) {
    if (obj._grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (obj._grade > 150)
        throw  Bureaucrat::GradeTooLowException();
    this->_grade = obj._grade;
    return *this;
}


Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destroyed" << std::endl;
}

std::string const Bureaucrat::getName() const {return _name;}
int Bureaucrat::getGrade() const {return _grade;}

void Bureaucrat::incrementGrade()
{
    _grade--;
    if (_grade  < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
    _grade++;
    if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}


std::ostream &operator<< (std::ostream &o , Bureaucrat const &rhs)
{
    o << "Bureaucrat " << rhs.getName() << " with grade " << rhs.getGrade() << std::endl;
    return o;
}