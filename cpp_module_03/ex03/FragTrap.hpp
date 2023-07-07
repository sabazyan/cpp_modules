#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(std::string);
        FragTrap(const FragTrap &);
        FragTrap &operator = (const FragTrap &);
        ~FragTrap(void);
        void highFivesGuys(void);
};

#endif