#include "PhoneBook.hpp"

int main ()
{
    PhoneBook phoneBook;
    phoneBook.setId(0);
    std::string choice;
    while (1337)
    {
        std::cout << GREEN << "ADD , SEARCH , EXIT" << RESET << std::endl;
        std::cout << BLUE << "please pick a choice : " << RESET;
        std::getline(std::cin, choice);
        if (choice.empty())
            continue;
        if (choice == "ADD")
            phoneBook.AddContact();
        else if (choice == "SEARCH")
            phoneBook.SearchContact();
        else if (choice == "EXIT")
        {
            std::cout << GREEN << "athala" << RESET << std::endl;
            break;
        }
        else
            std::cout << RED << "Error: " << RESET << "Invalid choice" << std::endl;
    }
}