#include "Zombie.hpp"

int main()
{
    Zombie *zombie = newZombie("Bob1");
    zombie->announce();
    randomChump("Bob");
    delete zombie;
}