#include "Zombie.hpp"

int main()
{
	Zombie *my_zombies = zombieHorde(5, "Zombelle");
	for (int i = 0; i < 5; ++i)
	{
		my_zombies[i].announce();
	}
	delete[] my_zombies;
	return 0;
}