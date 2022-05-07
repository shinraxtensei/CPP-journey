#include "Contact.hpp"


class PhoneBook
{
    private :
        Contact contacts[8];
        int id ;
    public :
        PhoneBook(void);
        ~PhoneBook();
        void AddContact(void);
        void SearchContact(void);
        void full_info(void);
        void increment_id(void);
        int get_id(void);
};