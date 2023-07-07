#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog's default constructor called" << std::endl;
    _type = "Dog";
    _brain = new Brain;
    return;
}

Dog::Dog(const Dog &other)
{
    std::cout << "Dog's copy constructor called" << std::endl;
    _type = other._type;
    _brain = new Brain(*other._brain);
    return;
}

Dog &Dog::operator = (const Dog &other)
{
    std::cout << "Dog's copy assignment operator called" << std::endl;
    if (this != &other)
    {
        delete _brain;
        _type = other._type;
        _brain = new Brain(*other._brain);
    }
    return *this;
}

Dog::~Dog(void)
{
    std::cout << "Dog's destructor called" << std::endl;
    delete _brain;
    return;
}

void Dog::makeSound(void) const
{
    std::cout << "Ha'f, ha'f" << std::endl;
    return;
}