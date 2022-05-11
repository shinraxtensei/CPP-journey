#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    // print only the name of the zombie in red color then print died
    std::cout << "\033[31m" << this->name << " died\033[0m" << std::endl;
}

void    Zombie::announce()
{
    std::cout  << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* Zombie::newZombie( std::string name)
{
    Zombie *zombie = new Zombie(name);
    return zombie;
}


Zombie* newZombie( std::string name)
{
    Zombie* newZombie = new Zombie(name);
    return newZombie;
}


void randomChump( std::string name)
{
    Zombie* zombie = newZombie(name);
    zombie->announce();
}
