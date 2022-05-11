#include <iostream>

class Zombie {

    private :
        std::string name;
    public :
        Zombie* newZombie( std::string name);
        void baptiseZombie( std::string name){this->name = name;}
        Zombie(std::string name);
        Zombie(){};
        ~Zombie();
        void announce();

};
        Zombie* zombieHorde( int N, std::string name );