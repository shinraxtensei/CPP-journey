#include "ClapTrap.hpp"

int main ()
{
    ClapTrap clap("clap1");
    clap.takeDamage(10);
    clap.beRepaired(5);
    clap.attack("clap2");
}