#include "Cure.hpp"

Cure::Cure(std::string const &type)
{
    std::cout << "Constructor with parameter" << std::endl;
    _type = "cure";
    return ;
}

Cure::Cure(const Cure &other)
{
    std::cout << "Copy constructor" << std::endl;
    _type = other._type;
    return ;
}

Cure &Cure::operator = (const Cure &other)
{
    std::cout << "Assignment operator" << std::endl;
    if (this != &other)
    {
        _type = other._type;
    }
    return *this;
}

Cure::~Cure(void)
{
    std::cout << "Destructor" << std::endl;
    return ;
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    return ;
}