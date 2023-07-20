#include "Point.hpp"

float area(Fixed x1, Fixed y1, Fixed x2, Fixed y2, Fixed x3, Fixed y3)
{
    float area = ((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2).toFloat();
    if (area < 0)
        return (-1 * area);
    return area;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float A = area(a.getX(), a.getY(), b.getX(), b.getY(), c.getX(), c.getY());
    float A1 = area(point.getX(), point.getY(), b.getX(), b.getY(), c.getX(), c.getY());
    float A2 = area(a.getX(), a.getY(), point.getX(), point.getY(), c.getX(), c.getY());
    float A3 = area(a.getX(), a.getY(), b.getX(), b.getY(), point.getX(), point.getY());
    if (A == A1 + A2 + A3 && A1 != 0 && A2 != 0 && A3 != 0)
        return true;
    else
        return false;
}