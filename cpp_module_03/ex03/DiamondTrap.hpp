#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    public:
        DiamondTrap(std::string);
        DiamondTrap(const DiamondTrap &);
        DiamondTrap &operator = (const DiamondTrap &);
        ~DiamondTrap(void);
        void whoAmI(void);
        void attack(const std::string& target);
    private:
        std::string _name;
};

#endif