#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << "HumanA constructor called" << std::endl;
	return ;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA destructor called" << std::endl;
	return ;
}

void HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
	return ;
}
