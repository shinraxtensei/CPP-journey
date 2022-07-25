#pragma once

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define MAGENTA "\033[1;35m"
#define CYAN "\033[1;36m"
#define RESET "\033[0m"

class Bureaucrat;

#include "Form.hpp"
#include <iostream>




class Bureaucrat 
{
    private:
        std::string const _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(Bureaucrat const &src);
        ~Bureaucrat();

        Bureaucrat &operator=(Bureaucrat const &rhs);
        
        std::string const getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        void signForm(Form &form);
        void executeForm(Form &form);


        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return (RED "Grade is too high" RESET);
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return (RED "Grade is too low" RESET);
                }
        };

};

std::ostream &operator<< (std::ostream &o , Bureaucrat const &rhs);

