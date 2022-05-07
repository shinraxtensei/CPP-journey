#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie(void);
        void newName(std::string name);
        void announce();
};

Zombie* zombieHorde( int N, std::string name );
