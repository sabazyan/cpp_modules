#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor called, " << _name << " died"<< std::endl;
	return;
}

void Zombie::setName(std::string name)
{
	_name = name;
	return;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}