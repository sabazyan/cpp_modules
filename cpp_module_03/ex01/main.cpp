#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap clap("Clap");
    ScavTrap trap = clap;
    trap.attack("Trap");

    return 0;
}