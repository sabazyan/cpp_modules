#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap clap("Clap");
    clap.attack("Trap");
    std::cout << std::endl;

    ScavTrap scav("Scav");
    scav.guardGate();
    std::cout << std::endl;

    FragTrap frag("Frag");
    frag.highFivesGuys();
    std::cout << std::endl;
    return 0;
}