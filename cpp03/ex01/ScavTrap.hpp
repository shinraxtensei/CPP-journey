#include "ClapTrap.hpp"

// a class for the ScavTrap that enherits from ClapTrap class
class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ~ScavTrap();
        void attack(const std::string& target);
};