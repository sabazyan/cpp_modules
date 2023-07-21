#include "AMateria.hpp"

AMateria::AMateria(void)
{
    std::cout << "Default constructor" << std::endl;
    return ;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << "Constructor with parameter" << std::endl;
    return ;
}

AMateria::AMateria(const AMateria &other)
{
    std::cout << "Copy constructor" << std::endl;
    _type = other._type;
    return ;
}

AMateria &AMateria::operator = (const AMateria &other)
{
    std::cout << "Assignment operator" << std::endl;
    if (this != &other)
    {
        _type = other._type;
    }
    return *this;
}

AMateria::~AMateria(void)
{
    std::cout << "Destructor" << std::endl;
    return ;
}

std::string const &AMateria::getType(void) const
{
    return _type;
}

void AMateria::use(ICharacter &target)
{
    std::cout << target.getName() << std::endl;
    return ;
}