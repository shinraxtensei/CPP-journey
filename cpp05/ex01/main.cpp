#include <iostream>
#include "Form.hpp"

int main(void) {
    try {
        Form f1 = Form("chahadat sekna", 10, 5);
        Bureaucrat b1 = Bureaucrat("hamid", 15);
        Bureaucrat b2 = Bureaucrat("hassan", 1);
        b1.signForm(f1);
        b2.signForm(f1);


        Form f2 = Form("chahadat lhayat", 0, 5);
    }
    catch (std::exception & e) {
        std::cout << "\n\nException: " << e.what() << std::endl;
    }
}