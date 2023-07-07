#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat's default constructor called" << std::endl;
    _type = "Cat";
    _brain = new Brain;
    return;
}

Cat::Cat(const Cat &other)
{
    std::cout << "Cat's copy constructor called" << std::endl;
    this->_type = other._type;
    return;
}

Cat &Cat::operator = (const Cat &other)
{
    std::cout << "Cat's copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_type = other._type;
    }
    return *this;
}

Cat::~Cat(void)
{
    std::cout << "Cat's destructor called" << std::endl;
    delete _brain;
    return;
}

void Cat::makeSound(void) const
{
    std::cout << "Mia~u, mia~u" << std::endl;
    return;
}