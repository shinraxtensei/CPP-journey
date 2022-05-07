#include "PhoneBook.hpp"


PhoneBook::PhoneBook(void)
{
    this->id = 0;
    return ;
}

PhoneBook::~PhoneBook()
{
    return ;
}

void PhoneBook::AddContact(void)
{
    std::string firstName, lastName, nickname, phoneNumber, darkestSecret;
    std::cout << "enter a first name : " ;
    std::getline(std::cin, firstName);
    std::cout  << "enter a last name : " ;
    std::getline(std::cin, lastName);
    std::cout  << "enter a nickname : ";
    std::getline(std::cin, nickname);
    std::cout <<  "enter a phone number : " ;
    std::getline(std::cin, phoneNumber);
    std::cout << "enter a darkest secret : ";
    std::getline(std::cin, darkestSecret);
    PhoneBook::contacts[id].AddContact(firstName, lastName, nickname, phoneNumber, darkestSecret, PhoneBook::get_id());
    std::cout << "\033[32m" << "contact added\n" << "\033[0m" << std::endl;
    PhoneBook::increment_id();
}


void PhoneBook::SearchContact( void)
{
    int i = -1;
    std::cout << TABLE_HEADER << std::endl;
    while (++i < PhoneBook::get_id())
        PhoneBook::contacts[i].Display_contacts();
    PhoneBook::full_info();
}


void PhoneBook::full_info(void)
{
    int index;
    std::cout  << "enter an index to see full info : " ;
    std::cin >> index;
    while (index > PhoneBook::get_id())
    {
        std::cout << "\033[31m" << "index out of range\n" << "\033[0m" << std::endl;
        std::cout  << "enter an index to see full info : " ;
        std::cin >> index;
    }
    PhoneBook::contacts[index].Fulldisplay();
}

void PhoneBook::increment_id(void)
{
    if(PhoneBook::id < 8)   
        PhoneBook::id += 1;
}

int PhoneBook::get_id(void)
{
    return PhoneBook::id;
}