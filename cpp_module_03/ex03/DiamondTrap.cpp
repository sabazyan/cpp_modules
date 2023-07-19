#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
{
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;
    std::cout << "DiamondTrap's constructor with parameter called" << std::endl;
    return;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
    std::cout << "DiamondTrap's copy constructor called" << std::endl;
    this->_name = other._name;
    return;
}

DiamondTrap &DiamondTrap::operator = (const DiamondTrap &other)
{
    std::cout << "DiamondTrap's copy assignment opeator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
    }
    return *this;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap's destructor called" << std::endl;
    return;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
    this->ClapTrap::_name = _name + "_clap_name";
    std::cout << "DiamondTrap's name is " << _name << ", and ClapTrap's name is " << ClapTrap::_name << std::endl;
    return;
}