#include "Contact.hpp"


class PhoneBook
{
    private:
        Contact contacts[8];
        int id ;
    public:
        PhoneBook();
        ~PhoneBook();
        void AddContact();
        void SearchContact();
        std::string ReqestData(std::string promt );
        int getId();
        void setId(int id);
};