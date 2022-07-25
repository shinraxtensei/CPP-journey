#include "Form.hpp"


Form::Form() : _name(""), _isSigned(false), _gradeToSign(0), _gradeToExecute(0) 
{
    std::cout << "Form created" << std::endl;
    return;
}

Form::Form(std::string const name, int gradeToSign, int gradeToExecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) 
{
    if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
        throw  Form::GradeTooLowException();
    
    std::cout << "Form created" << std::endl;
    return;
}

Form::Form(Form const &src) : _name(src._name), _isSigned(src._isSigned), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute) 
{
    if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
        throw  Form::GradeTooLowException();
    std::cout << "Form created" << std::endl;
    return;
}

Form &Form::operator=(Form const &obj) {
    if (obj._gradeToSign < 1 || obj._gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (obj._gradeToSign > 150 || obj._gradeToExecute > 150)
        throw  Form::GradeTooLowException();
    this->_gradeToSign = obj._gradeToSign;
    this->_gradeToExecute = obj._gradeToExecute;
    return *this;
}



Form::~Form()
{
    std::cout << "Form destroyed" << std::endl;
    return;
}



void Form::beSigned(Bureaucrat const &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_gradeToSign)
        throw Form::GradeTooHighException();
    this->_isSigned = true;
    return;
}

void Form::execute(Bureaucrat const &executer)
{
    if (executer.getGrade() > this->_gradeToExecute)
        throw Form::GradeTooLowException();
    if (!this->getIsSigned()) {
        std::cout << "couldn't execute form because it's not signed" << std::endl;
        return ;
    }
    this->action();
    std::cout << executer.getName() << " executed " << this->getName() << std::endl;
}

// getters

std::string  Form::getName() const {return this->_name;}
int Form::getGradeToSign() const {return this->_gradeToSign;}
int Form::getGradeToExecute() const {return this->_gradeToExecute;}
bool Form::getIsSigned() const {return this->_isSigned;}


void Form::action() const
{

    return;
}



std::ostream &operator<< (std::ostream &o , Form const &rhs)
{
    o << "Form " << rhs.getName() << " is ";
    if (rhs.getIsSigned())
        o << "signed";
    else
        o << "not signed";
    o << " and has a grade to sign of " << rhs.getGradeToSign() << " and a grade to execute of " << rhs.getGradeToExecute() << std::endl;
    return o;
}