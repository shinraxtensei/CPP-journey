#include "Zombie.hpp"

int main()
{

    Zombie *zombie = zombieHorde(5, "hamid");
    int i = 0;
    while (i < 5)
    {
        zombie[i].announce();
        i++;
    }
    return 0;

}