#include "ScavTrap.hpp"

// constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    this->hitpoints = 100;
    this->energypoints = 50;
    this->attackdamage = 20;
}

// destructor
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name << " is destroyed" << std::endl;
}
