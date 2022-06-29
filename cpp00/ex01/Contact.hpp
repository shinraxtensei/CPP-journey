#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>


// color code for the console
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

# define TABLE_HEADER	"-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.-._.-.-.\n|   INDEX  |FIRST_NAME|LAST_NAME | NICKNAME |\n--------------------------------------------"

class Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phonenumber;
        std::string darkestsecret;
        int index;

    public:
        Contact();
        ~Contact();
        void    AddContact(std::string firstName, std::string lastName, std::string nickname, std::string phonenumber, std::string darkestsecret , int index);
        void DisplayContact();
        void DisplayTableForm();
        std::string return_attr(std::string attr);
        void SetIndex(int index);
        std::string GetIndex();
        std::string GetFirstName();
        std::string GetLastName();
        std::string GetNickname();
        std::string GetPhonenumber();
        std::string GetDarkestsecret();
};