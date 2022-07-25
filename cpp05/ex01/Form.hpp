#pragma once

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define MAGENTA "\033[1;35m"
#define CYAN "\033[1;36m"
#define RESET "\033[0m"

class Form;

#include "Bureaucrat.hpp"
#include <iostream>

class Form  {
    private:
        std::string const _name;
        bool _isSigned;
        int _gradeToSign;
        int _gradeToExecute;
    public:
        Form();
        Form(std::string const name, int gradeToSign, int gradeToExecute );
        Form(Form const &src);
        Form &operator=(Form const &obj);
        ~Form();

        std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        bool getIsSigned() const;
        
        void beSigned(Bureaucrat const &bureaucrat);
        
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

std::ostream &operator<< (std::ostream &o , Form const &rhs);

