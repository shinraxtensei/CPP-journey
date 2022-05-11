#include "ClapTrap.hpp"

// Constructor
ClapTrap::ClapTrap( std::string name )
{
    this->name = name;
    this->hitpoints = 10;
    this->energypoints = 10;
    this->attackdamage = 0;

    std::cout <<  "claptrap " << this->name << " is created" << std::endl;
}
// Destructor
ClapTrap::~ClapTrap()
{
    std::cout <<  "claptrap " << this->name << " is destroyed" << std::endl;
}
// Attack

void ClapTrap::attack(const std::string& target)
{
    hitpoints -= attackdamage;
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackdamage << " points of damage!" << std::endl;
}

// Take damage
void ClapTrap::takeDamage(unsigned int amount)
{
    hitpoints -= amount;
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
}

// Be repaired
void ClapTrap::beRepaired(unsigned int amount)
{
    hitpoints += amount;
    std::cout << "ClapTrap " << name << " is repaired by " << amount << " points!" << std::endl;
}
