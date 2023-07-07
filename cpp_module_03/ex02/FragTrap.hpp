#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string);
        FragTrap(const FragTrap &);
        FragTrap &operator = (const FragTrap &);
        ~FragTrap(void);
        void highFivesGuys(void);
};

#endif