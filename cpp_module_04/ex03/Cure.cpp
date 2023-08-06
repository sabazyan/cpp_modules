#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure Default constructor" << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other)
{
    std::cout << "Cure Copy constructor" << std::endl;
}

Cure &Cure::operator = (const Cure &other)
{
    std::cout << "Cure Assignment operator" << std::endl;
    if (this != &other)
    {
        AMateria::operator=(other);
    }
    return *this;
}

Cure::~Cure(void)
{
    std::cout << "Cure Destructor" << std::endl;
}

AMateria *Cure::clone() const
{
    Cure *cure = new Cure;
    return cure;
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}