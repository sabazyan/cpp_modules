#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Constructor called" << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor called, " << _name << " died"<< std::endl;
	return ;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}