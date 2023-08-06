#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice Default constructor" << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other)
{
    std::cout << "Ice Copy constructor" << std::endl;
}

Ice &Ice::operator = (const Ice &other)
{
    std::cout << "Ice Assignment operator" << std::endl;
    if (this != &other)
    {
        AMateria::operator=(other);
    }
    return *this;
}

Ice::~Ice(void)
{
    std::cout << "Ice Destructor" << std::endl;
}

AMateria *Ice::clone() const
{
    Ice *ice = new Ice;
    return ice;
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}