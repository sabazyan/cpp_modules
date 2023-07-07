#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap's constructor with parameter called" << std::endl;
    _name = name; 
    return;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
    std::cout << "ScavTrap's copy constructor called" << std::endl;
    *this = other;
    return;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &other)
{
    std::cout << "ScavTrap's copy assignment opeator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this-> _hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return *this;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap's destructor called" << std::endl;
    return;
}

void ScavTrap::attack(const std::string& target)
{
    if (_hitPoints > 0 && _energyPoints > 0)
    {
        --_energyPoints;
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
            << _attackDamage << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << _name << " has no hit points!" << std::endl;
    }
    return;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
    return;
}