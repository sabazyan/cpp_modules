#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "ClapTrap's default constructor called" << std::endl;
    _name = "Name";
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    return;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap's constructor with parameter called" << std::endl;
    _name = name;    
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    return;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap's copy constructor called" << std::endl;
    *this = other;
    return;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &other)
{
    std::cout << "ClapTrap's copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this-> _hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap's destructor called" << std::endl;
    return;
}

void ClapTrap::attack(const std::string& target)
{
    if (_hitPoints > 0 && _energyPoints > 0)
    {
        --_energyPoints;
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
            << _attackDamage << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " has no hit points!" << std::endl;
    }
    return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
   _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " lost " << amount << " attack damage points, and has "
        << _attackDamage << " attack damage points!" << std::endl;
    return;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints > 0)
    {
        --_energyPoints;
        _hitPoints += amount;
        std::cout << "ClapTrap " << _name << " repaired itself, received " << amount
            << " of hit points, and has " << _hitPoints << " hit points!" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " has no hit points!" << std::endl;
    }
    return;
}