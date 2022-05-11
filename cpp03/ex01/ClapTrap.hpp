#include <iostream>

class ClapTrap 
{
    private:
        std::string name;
        int hitpoints ;
        int energypoints ;
        int attackdamage ;
    public:
        ClapTrap( std::string name );
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};