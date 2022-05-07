#include <iostream>
#include <iomanip>
// create a class called Contact with the following attributes:  first name, last name, nickname, phone number, and
// darkest secret
class Contact {
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
        int id;
    public:
        Contact(void);
        ~Contact();
        void AddContact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret, int id);
        void Display_contacts(void) const;
        void Fulldisplay(void) const;
};

# define TABLE_HEADER	"-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.-.\n   INDEX  |FIRST_NAME|LAST_NAME | NICKNAME |\n--------------------------------------------"