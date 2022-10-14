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