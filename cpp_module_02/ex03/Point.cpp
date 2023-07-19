#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{
    // std::cout << "Default constructor" << std::endl;
    return ;
}

Point::Point(float const coord_1, float const coord_2) : x(coord_1), y(coord_2)
{
    // std::cout << "Constructor with parameters" << std::endl;
    return ;
}

Point::Point(const Point &other) : x(other.x), y(other.y)
{
    // std::cout << "Copy constructor" << std::endl;
    return ;
}

Point &Point::operator = (const Point &other)
{
    // std::cout << "Assignment operator overload" << std::endl;
    (Fixed)x = other.x;
    (Fixed)y = other.y;
    return *this;
}

Point::~Point(void)
{
    // std::cout << "Destructor" << std::endl;
    return ;
}

Fixed Point::get_x(void) const
{
    return x;
}

Fixed Point::get_y(void) const
{
    return y;
}