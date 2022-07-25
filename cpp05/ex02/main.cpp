#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void) {

    try
    {
        Form *chahada = new ShrubberyCreationForm("chahada");
        Bureaucrat b1("Bob", 1);
        b1.signForm(*chahada);
        b1.executeForm(*chahada);
    }
    catch (std::exception & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout  << std::endl;
    try
    {
        Form *chahada = new RobotomyRequestForm("chahada");
        Bureaucrat b1("Bob", 1);
        b1.signForm(*chahada);
        b1.executeForm(*chahada);
    }
    catch (std::exception & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout  << std::endl;
    try
    {
        Form *chahada = new PresidentialPardonForm("chahada");
        Bureaucrat b1("Bob", 1);
        b1.signForm(*chahada);
        b1.executeForm(*chahada);
    }
    catch (std::exception & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

}