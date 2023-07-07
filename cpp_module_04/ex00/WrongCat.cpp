#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat's default constructor called" << std::endl;
    _type = "WrongCat";
    return;
}

WrongCat::WrongCat(const WrongCat &other)
{
    std::cout << "WrongCat's copy constructor called" << std::endl;
    this->_type = other._type;
    return;
}

WrongCat &WrongCat::operator = (const WrongCat &other)
{
    std::cout << "WrongCat's copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_type = other._type;
    }
    return *this;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat's destructor called" << std::endl;
    return;
}

void WrongCat::makeSound(void) const
{
    std::cout << "Wrong Mia~u, mia~u" << std::endl;
    return;
}