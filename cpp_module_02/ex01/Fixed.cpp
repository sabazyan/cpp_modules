#include "Fixed.hpp"

const int Fixed::_fractCount = 8;

Fixed::Fixed(void) : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    this->setRawBits(num << _fractCount);
    return;
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    this->setRawBits((int)roundf(num * (1 << _fractCount)));
    return;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
	// _value = other.getRawBits();
    *this = other;
    return;
}

Fixed &Fixed::operator = (const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
	    this->_value = src.getRawBits();
    return *this;
}

std::ostream &operator << (std::ostream &out, const Fixed &in)
{
    out << in.toFloat();
    return out;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

int Fixed::getRawBits(void) const
{
    return this->_value;
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
    return;
}

float Fixed::toFloat(void) const
{
    return (float)(_value) / (1 << _fractCount);
}

int Fixed::toInt(void) const
{
    return _value >> _fractCount;
}