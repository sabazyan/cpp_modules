#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
    public:
        ClapTrap(std::string);
        ClapTrap(const ClapTrap &);
        ClapTrap &operator = (const ClapTrap &);
        ~ClapTrap(void);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    private:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
};

#endif