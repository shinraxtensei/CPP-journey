#include "Zombie.hpp"


Zombie::Zombie()
{
    return ;
}
Zombie::~Zombie(void)
{
    std::cout << "Zombie " << this->name << " died" << std::endl;
}

void Zombie::newName(std::string name)
{
    this->name = name;
}

void Zombie::announce()
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}