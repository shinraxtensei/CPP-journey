#include "Contact.hpp"


Contact::Contact() {index = 0 ;};
Contact::~Contact(){};

void    Contact::AddContact(std::string firstName, std::string lastName, std::string nickname, std::string phonenumber, std::string darkestsecret , int index)
{
    this->firstName = firstName;
    this->lastName = lastName;
    this->nickname = nickname;
    this->phonenumber = phonenumber;
    this->darkestsecret = darkestsecret;
    this->index = index;
}

void Contact::SetIndex(int index) {this->index = index + 1;}

std::string Contact::GetIndex() {return std::to_string(index);}
std::string Contact::GetFirstName() {return firstName;}
std::string Contact::GetLastName() {return lastName;}
std::string Contact::GetNickname() {return nickname;}
std::string Contact::GetPhonenumber() {return phonenumber;}
std::string Contact::GetDarkestsecret() {return darkestsecret;}




void Contact::DisplayContact()
{
    std::cout<< YELLOW << "|" << "Index: "<< RESET << Contact::GetIndex() << std::endl;
    std::cout<< YELLOW << "|"<< "First Name: "<< RESET << Contact::GetFirstName() << std::endl;
    std::cout<< YELLOW << "|" << "Last Name: "<< RESET << Contact::GetLastName() << std::endl;
    std::cout<< YELLOW << "|"<< "Nickname: "<< RESET << Contact::GetNickname() << std::endl;
    std::cout<< YELLOW << "|" << "Phone Number: "<< RESET << Contact::GetPhonenumber() << std::endl;
    std::cout<< YELLOW << "Darkest Secret: "<< RESET << Contact::GetDarkestsecret() << std::endl;
    
}

std::string Contact::return_attr(std::string attr)
{
    if (attr.length() >= 10)
        return(attr.substr(0,9) + ".");
    else
        return attr;
}

void Contact::DisplayTableForm()
{
    std::cout << "|" << std::setw(10) << Contact::return_attr(Contact::GetIndex()) << "|" ;
    std::cout << std::setw(10) << Contact::return_attr(Contact::GetFirstName()) << "|" ;
    std::cout << std::setw(10) << Contact::return_attr(Contact::GetLastName()) << "|" ;
    std::cout << std::setw(10) << Contact::return_attr(Contact::GetNickname()) << "|" ;
    std::cout << std::endl;
}

