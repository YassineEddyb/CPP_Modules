# ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"
#include <iostream>
#include <cmath>


class Point {
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point& p);
        Point& operator = (const Point& p);

        Fixed getX() const;
        Fixed getY() const;

        ~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point );

# endif