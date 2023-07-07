#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal's default constructor called" << std::endl;
    _type = "WrongAnimal";
    return;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "WrongAnimal's copy constructor called" << std::endl;
    this->_type = other._type;
    return;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &other)
{
    std::cout << "WrongAnimal's copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_type = other._type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal's destructor called" << std::endl;
    return;
}

void WrongAnimal::setType(std::string type)
{
    _type = type;
    return;
}

std::string WrongAnimal::getType(void) const
{
    return _type;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "Wrong Animal sound" << std::endl;
    return;
}