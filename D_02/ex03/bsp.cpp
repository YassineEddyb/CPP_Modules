#include "Point.hpp"

Fixed area(Fixed x1, Fixed y1, Fixed x2, Fixed y2, Fixed x3, Fixed y3)
{
    Fixed f(2.0f);
    Fixed n(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

    if (n < 0)
        n = (n * -2) / 2;
    
    return (n / f);
}

bool bsp( Point const a, Point const b, Point const c, Point const point ) {

    Fixed A  = area(a.getX(), a.getY(), b.getX(), b.getY(), c.getX(), c.getY());
    Fixed A1 = area(a.getX(), a.getY(), b.getX(), b.getY(), point.getX(), point.getY());
    Fixed A2 = area(a.getX(), a.getY(), point.getX(), point.getY(), c.getX(), c.getY());
    Fixed A3 = area(point.getX(), point.getY(), b.getX(), b.getY(), c.getX(), c.getY());

    std::cout << A1 + A2 + A3 << std::endl;
    std::cout << A << std::endl;

    if (A == A1 + A2 + A3)
        return true;
    else return false;
}