#ifndef POINT_HPP
# define POINT_HPP
#include <iostream>
#include "Fixed.hpp"

class Point
{
    public:
        Point(void);
        Point(const float, const float);
        Point(const Point&);
        Point &operator = (const Point &);
        ~Point(void);
        Fixed getX(void) const;
        Fixed getY(void) const;
    private:
        Fixed const x;
        Fixed const y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

# endif