#include "zombie.hpp"
void randomChump( std::string name )
{
    Zombie newZombie(name);
    newZombie->announce();
}