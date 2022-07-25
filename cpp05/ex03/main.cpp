#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void) {


    try
    {
        Bureaucrat b1("hamid", 1);
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        b1.signForm(*rrf);
        b1.executeForm(*rrf);
    }
    catch (Intern::FromNotFound & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
std::cout  << std::endl;


    try
    {
        Bureaucrat b1("hamid", 1);
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
        b1.signForm(*rrf);
        b1.executeForm(*rrf);
    }
    catch (Intern::FromNotFound & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }


    std::cout  << std::endl;


    try
    {
        Bureaucrat b1("hamid", 1);
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
        b1.signForm(*rrf);
        b1.executeForm(*rrf);
    }
    catch (Intern::FromNotFound & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout  << std::endl;


    try
    {
        Bureaucrat b1("hamid", 1);
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("asdadadad", "Bender");
        b1.signForm(*rrf);
        b1.executeForm(*rrf);
    }
    catch (Intern::FromNotFound & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    
}
