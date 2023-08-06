#include "AMateria.hpp"

AMateria::AMateria(void) : _type("Default type")
{
    std::cout << "AMateria Default constructor" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << "AMateria Constructor with parameter" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
    std::cout << "AMateria Copy constructor" << std::endl;
    _type = other._type;
}

AMateria &AMateria::operator = (const AMateria &other)
{
    std::cout << "AMateria Assignment operator" << std::endl;
    if (this != &other)
    {
        _type = other._type;
    }
    return *this;
}

AMateria::~AMateria(void)
{
    std::cout << "AMateria Destructor" << std::endl;
}

std::string const &AMateria::getType(void) const
{
    return _type;
}

void AMateria::use(ICharacter &target)
{
    std::cout << target.getName() << std::endl;
}