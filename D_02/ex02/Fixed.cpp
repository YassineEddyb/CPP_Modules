#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    fixed_point = 0;
}

Fixed::Fixed(const Fixed& obj) {
    std::cout << "Copy constructor called" << std::endl;
    fixed_point = obj.getRawBits();
}

Fixed& Fixed::operator= (const Fixed& obj) {
    std::cout << "Copy assignment operator called" << std::endl;
    fixed_point = obj.getRawBits();
    return *this;
}

Fixed::Fixed(const int n) {
    fixed_point = n * (1 << scaler);
}

Fixed::Fixed(const float n) {
    fixed_point = roundf(n * (1 << scaler));
}

float Fixed::toFloat( void ) const {
    return (float)fixed_point / (1 << scaler);
}

int Fixed::toInt( void ) const {
    return roundf(fixed_point / (1 << scaler));
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return fixed_point;
}
void Fixed::setRawBits( int const raw ) {
    std::cout << "setRawBits member function called" << std::endl;
    fixed_point = raw;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Fixed& f)
{
    out << f.toFloat();
    return out;
}