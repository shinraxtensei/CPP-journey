#include "Contact.hpp"

Contact::Contact(void)
{
    return ;
}

Contact::~Contact()
{
    return;
}


void Contact::AddContact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret, int id)
{
    this->id = id;
    this->firstName = firstName;
    this->lastName = lastName;
    this->nickname = nickname;
    this->phoneNumber = phoneNumber;
    this->darkestSecret = darkestSecret;
}

std::string check_len(std::string str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    else
		return (str);
}

void    Contact::Display_contacts(void) const
{
    std::cout << std::setw(10) << this->id << "|";
    std::cout << std::setw(10) << check_len(this->firstName) << "|";
    std::cout << std::setw(10) << check_len(this->lastName) << "|";
    std::cout << std::setw(10) << check_len(this->nickname) << "|";
    std::cout << std::endl;
    return ;
}

void    Contact::Fulldisplay(void) const
{
    std::cout << "Firstname:\t" << this->firstName << std::endl;
    std::cout << "Last name:\t" << this->lastName << std::endl;
    std::cout << "Nickname:\t" << this->nickname << std::endl;
    std::cout << "Phone number:\t" << this->phoneNumber << std::endl;
    std::cout << "Darkest secret:\t" << this->darkestSecret << std::endl;
    return ;
}