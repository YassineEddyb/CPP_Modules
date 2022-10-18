#include "Point.hpp"

Point::Point(): x(0), y(0) {
    // std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float x, const float y): x(x), y(y) {
    // std::cout << "Constructor called" << std::endl;
}

Point::Point(const Point& p): x(p.getX()), y(p.getY()) {
    // std::cout << "Copy constructor called" << std::endl;
}

Fixed Point::getX() const {
    return x;
}

Fixed Point::getY() const {
    return y;
}

Point::~Point() {
    // std::cout << "Destructor called" << std::endl;
}
