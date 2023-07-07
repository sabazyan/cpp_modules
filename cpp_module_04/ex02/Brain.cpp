#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain's default constructor called" << std::endl;
    return;
}

Brain::Brain(const Brain &other)
{
    std::cout << "Brain's copy constructor called" << std::endl;
    for (int i = 0; i < 100; ++i)
    {
        this->_ideas[i] = other._ideas[i];
    }
    return;
}

Brain &Brain::operator = (const Brain &other)
{
    std::cout << "Brain's copy assignment operator called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; ++i)
        {
            this->_ideas[i] = other._ideas[i];
        }
    }
    return *this;
}

Brain::~Brain(void)
{
    std::cout << "Brain's destructor called" << std::endl;
    return;
}