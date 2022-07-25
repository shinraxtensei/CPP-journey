#pragma onece

#include "Form.hpp"
#include <iostream>
#include <string>
#include <fstream>
class ShrubberyCreationForm : public Form
{
    private:
        std::string _target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const &src);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &obj);
        virtual ~ShrubberyCreationForm();

        void action() const;
};