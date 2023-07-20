#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
    Point a(0, 0);
    Point b(6, 0);
    Point c(2, 3);
    Point point(2, 1); // is
    //Point point(0, 1); // is not
    //Point point(0, 0); // is not
    //Point point(3, 0); // is not
    //Point point(-3, 0); // is not

    if (bsp(a, b, c, point))
        std::cout << "The point is inside the triangle!" << std::endl;
    else
        std::cout << "The point is not inside the triangle!" << std::endl;
    return 0;
}