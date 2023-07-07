#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	std::cout << "HumanB constructor called" << std::endl;
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB destructor called" << std::endl;
	return ;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
	return ;
}

void HumanB::attack(void)
{
	std::cout << _name << " attacks with their " << (*_weapon).getType() << std::endl;
	return ;
}