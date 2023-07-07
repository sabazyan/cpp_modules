#include "Zombie.hpp"

int main()
{
	Zombie *my_zombie = newZombie("Zombelle");
	my_zombie->announce();
	randomChump("Zombiela");
	delete my_zombie;
	return 0;
}