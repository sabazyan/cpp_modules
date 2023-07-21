#include "Character.hpp"

Character::Character(void)
{
    std::cout << "Default constructor" << std::endl;
    return ;
}

Character::Character(const Character &)
{
    std::cout << "Copy constructor" << std::endl;
    return ;
}

Character &Character::operator = (const Character &)
{
    std::cout << "Assignment operator" << std::endl;
    return *this;
}

Character::~Character(void)
{
    std::cout << "Destructor" << std::endl;
    return ;
}

std::string const &Character::getName() const
{
    return name;
}

void Character::equip(AMateria *m)
{
    std::cout << m->getType() << std::endl;
    return ;
}

void Character::unequip(int idx)
{
    std::cout << idx << std::endl;
    return ;
}

void Character::use(int idx, ICharacter &target)
{
    std::cout << idx << std::endl << target.getName() << std::endl;
    return ;
}