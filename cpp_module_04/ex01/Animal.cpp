#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal's default constructor called" << std::endl;
    _type = "Animal";
    return;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal's copy constructor called" << std::endl;
    this->_type = other._type;
    return;
}

Animal &Animal::operator = (const Animal &other)
{
    std::cout << "Animal's copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_type = other._type;
    }
    return *this;
}

Animal::~Animal(void)
{
    std::cout << "Animal's destructor called" << std::endl;
    return;
}

void Animal::setType(std::string type)
{
    _type = type;
    return;
}

std::string Animal::getType(void) const
{
    return _type;
}

void Animal::makeSound(void) const
{
    std::cout << "Animal sound" << std::endl;
    return;
}