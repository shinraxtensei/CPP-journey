#pragma once

#include "Form.hpp"

    class PresidentialPardonForm : public Form {
        private:
            std::string _target;
        public:
            PresidentialPardonForm();
            PresidentialPardonForm(std::string target);
            PresidentialPardonForm(PresidentialPardonForm const &src);
            ~PresidentialPardonForm();
            
            PresidentialPardonForm &operator=(PresidentialPardonForm const &obj);
            void action() const;

    };