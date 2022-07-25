#pragma once
#include <iostream>
#include <string>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
class Intern {
    private:
        Form *forms[3];
    public:
        Intern();
        Intern(Intern const & src);
        ~Intern();

        Intern & operator=(Intern const & obj);

        Form * makeForm(std::string Type, std::string Target);
        Form * createPresident(std::string target);
        Form * createRobotomy(std::string target);
        Form * createShrubbery(std::string target);

        class FromNotFound : public std::exception {
            public:
                const char *what() const throw();
        };
};