#include "PhoneBook.hpp"

int main(){
    PhoneBook phoneBook;
    
    std::string str;
    while (1)
    {
    std::cout << "\033[34m" << "enter a command [add, search, exit] : " << "\033[0m";

    std::getline(std::cin, str);
    if (str == "exit")
        break;
    else if (str == "add")
        phoneBook.AddContact();
    else if (str == "search")
    {
        phoneBook.SearchContact();
        
    }   
    else
        std::cout << "\033[31m" << "unknown command\n" << "\033[0m" << std::endl;
    }
}