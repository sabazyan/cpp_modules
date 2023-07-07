#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual  public ClapTrap
{
    public:
        ScavTrap(void);
        ScavTrap(std::string);
        ScavTrap(const ScavTrap &);
        ScavTrap &operator = (const ScavTrap &);
        ~ScavTrap(void);
        void attack(const std::string& target);
        void guardGate(void);
};

#endif