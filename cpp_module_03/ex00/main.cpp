#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("Clap");
    ClapTrap trap = clap;
    trap.attack("Trap");
    trap.takeDamage(20);
    trap.beRepaired(10);
    return 0;
}