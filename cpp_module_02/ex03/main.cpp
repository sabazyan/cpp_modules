#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
    Point a(5, 3);
    Point b(5, 5);
    Point c(4, 5);
    Point point(2, 1);

    if (bsp(a, b, c, point))
        std::cout << "The point is inside the triangle!" << std::endl;
    else
        std::cout << "The point is not inside the triangle!" << std::endl;
    return 0;
}