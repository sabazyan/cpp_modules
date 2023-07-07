#include "Fixed.hpp"

const int Fixed::_fractCount = 8;

Fixed::Fixed(void) : _value(0)
{
    // std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(const int num)
{
    // std::cout << "Int constructor called" << std::endl;
    this->setRawBits(num << _fractCount);
    return;
}

Fixed::Fixed(const float num)
{
    // std::cout << "Float constructor called" << std::endl;
    this->setRawBits((int)roundf(num * (1 << _fractCount)));
    return;
}

Fixed::Fixed(const Fixed &other)
{
    // std::cout << "Copy constructor called" << std::endl;
	*this = other;
    return;
}

Fixed::~Fixed(void)
{
    // std::cout << "Destructor called" << std::endl;
    return;
}

Fixed &Fixed::operator = (const Fixed &src)
{
	// std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
	    this->_value = src.getRawBits();
    return *this;
}

bool Fixed::operator > (const Fixed &ins)
{
    return (this->getRawBits() > ins.getRawBits());
}

bool Fixed::operator < (const Fixed &ins)
{
    return (this->getRawBits() < ins.getRawBits());
}

bool Fixed::operator >= (const Fixed &ins)
{
    return (this->getRawBits() >= ins.getRawBits());
}

bool Fixed::operator <= (const Fixed &ins)
{
    return (this->getRawBits() <= ins.getRawBits());
}

bool Fixed::operator == (const Fixed &ins)
{
    return (this->getRawBits() == ins.getRawBits());
}

bool Fixed::operator != (const Fixed &ins)
{
    return (this->getRawBits() != ins.getRawBits());
}

Fixed Fixed::operator + (const Fixed &ins)
{
    return (Fixed(this->toFloat() + ins.toFloat()));
}

Fixed Fixed::operator - (const Fixed &ins)
{
    return (Fixed(this->toFloat() - ins.toFloat()));
}

Fixed Fixed::operator * (const Fixed &ins)
{
    return (Fixed(this->toFloat() * ins.toFloat()));
}

Fixed Fixed::operator / (const Fixed &ins)
{
    return (Fixed(this->toFloat() / ins.toFloat()));
}

Fixed &Fixed::operator ++ (void)
{
    ++this->_value;
    return *this;
}

Fixed Fixed::operator ++ (int value)
{
    Fixed temp(*this);
    ++this->_value;
    return temp;
}

Fixed &Fixed::operator -- (void)
{
    --this->_value;
    return *this;
}

Fixed Fixed::operator -- (int value)
{
    Fixed temp(*this);
    --this->_value;
    return temp;
}

Fixed &Fixed::min(Fixed &first, Fixed &second)
{
    return first.getRawBits() < second.getRawBits() ? first : second;
}

const Fixed &Fixed::min(const Fixed &first, const Fixed &second)
{
    return first.getRawBits() < second.getRawBits() ? first : second;
}

Fixed &Fixed::max(Fixed &first, Fixed &second)
{
    return first.getRawBits() > second.getRawBits() ? first : second;
}

const Fixed &Fixed::max(const Fixed &first, const Fixed &second)
{
    return first.getRawBits() > second.getRawBits() ? first : second;
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

std::ostream &operator << (std::ostream &out, const Fixed &in)
{
    out << in.toFloat();
    return out;
}