#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap's constructor with parameter called" << std::endl;
    _name = name;
    return;
}

FragTrap::FragTrap(const FragTrap &other)
{
    std::cout << "FragTrap's copy constructor called" << std::endl;
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    return;
}

FragTrap &FragTrap::operator = (const FragTrap &other)
{
    std::cout << "FragTrap's copy assignment opeator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return *this;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap's destructor called" << std::endl;
    return;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "High five!" << std::endl;
    return;
}