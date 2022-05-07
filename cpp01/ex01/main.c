#include "Zombie.hpp"

int main ()
{
    Zombie* horde ;
    horde =  zombieHorde(5, "jma3a");
    int i = 0;
    while (i < 5)
    {
        horde[i].announce();
        i++;
    }
    delete[] horde;
    return 0;
}