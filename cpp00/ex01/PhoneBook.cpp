#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){}
PhoneBook::~PhoneBook(){}
int    PhoneBook::getId(){return id;}
void    PhoneBook::setId(int id){this->id = id;}

std::string PhoneBook::ReqestData(std::string promt)
{
    std::string data;
    std::cout  << BLUE << "please enter " << promt << ": " << RESET ;
    std::getline(std::cin, data);
    if (data.empty())
    {
        std::cout << RED << "Error: " << RESET << "a field can't be empty" << std::endl;
        return ReqestData(promt);
    }
    return data;
}


void    PhoneBook::AddContact()
{
    std::string firstName = ReqestData("first name");
    std::string lastName = ReqestData("last name");
    std::string nickname = ReqestData("nickname");
    std::string phonenumber = ReqestData("phonenumber");
    std::string darkestsecret = ReqestData("darkestsecret");
    std::cout << GREEN << "Contact added" << RESET << std::endl;
    PhoneBook::contacts[PhoneBook::getId()].AddContact(firstName, lastName, nickname, phonenumber, darkestsecret, PhoneBook::getId() + 1);
    if (PhoneBook::getId() < 8)
        PhoneBook::setId(PhoneBook::getId() + 1);
    else
        PhoneBook::setId(0);
}



void    PhoneBook::SearchContact()
{
    if (id == 0)
    {
        std::cout << RED << "Error: " << RESET << "PhoneBook is empty" << std::endl;
        return ;
    }
    std::cout << CYAN << TABLE_HEADER << RESET << std::endl;
    for (int i = 0 ; i < 8 ; i++)
    {
        contacts[i].DisplayTableForm();
    }

    while (1337)
    {
        std::cout << CYAN << "\nchoose a contact to see full info or EXIT to return : " << RESET;
        std::string choice;
        std::getline(std::cin, choice);
        std::string maxids = std::to_string(PhoneBook::getId() );
        if (choice == "EXIT")
            break;
        if (choice.empty() || (choice > maxids || choice <= "0"))
        {
            std::cout << RED << "Error: " << RESET << "Invalid choice or index out of range" << std::endl;
            continue;
        }
        int index = std::stoi(choice);
        contacts[index].DisplayContact();
    }
}