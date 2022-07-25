#include "Bureaucrat.hpp"


int main(void) {

// construction

    try {
        Bureaucrat bureaucrat("hamid", 5);
        std::cout << bureaucrat << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        // std::cerr << "TooHighException" << std::endl;
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        // std::cerr << "TooLowException" << std::endl;
        std::cout << e.what() << std::endl;

    }

    // increments and decrements

    try {
        Bureaucrat bureaucrat1("hamada", 2);
        bureaucrat1.incrementGrade();
        std::cout << bureaucrat1 << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        // std::cerr << "TooHighException" << std::endl;
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        // std::cerr << "TooLowException" << std::endl;
        std::cout << e.what() << std::endl;
    }


    try {
        Bureaucrat bureaucrat2("hmido", 149);
        bureaucrat2.decrementGrade();
        std::cerr << bureaucrat2 << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cerr << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cerr << e.what() << std::endl;
    }
}