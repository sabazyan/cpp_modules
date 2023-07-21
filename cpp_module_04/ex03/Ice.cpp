#include "Ice.hpp"

Ice::Ice(std::string const &)
{
    std::cout << "Constructor with parameter" << std::endl;
    _type = "ice";
    return ;
}

Ice::Ice(const Ice &other)
{
    std::cout << "Copy constructor" << std::endl;
    _type = other._type;
    return ;
}

Ice &Ice::operator = (const Ice &other)
{
    std::cout << "Assignment operator" << std::endl;
    if (this != &other)
    {
        _type = other._type;
    }
    return *this;
}

Ice::~Ice(void)
{
    std::cout << "Destructor" << std::endl;
    return ;
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    return ;
}