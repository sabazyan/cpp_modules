#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	type = name;
	std::cout << "Weapon constructor called" << std::endl;
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon destructor called" << std::endl;
	return ;
}

std::string &Weapon::getType(void)
{
	return type;
}

void Weapon::setType(std::string newType)
{
	type = newType;
	return ;
}