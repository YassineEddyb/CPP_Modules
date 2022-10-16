#include "Fixed.hpp"


// constructors
Fixed::Fixed() {
    fixed_point = 0;
}

Fixed::Fixed(const Fixed& obj) {
    fixed_point = obj.getRawBits();
}

Fixed::Fixed(const int n) {
    fixed_point = n * (1 << scaler);
}

Fixed::Fixed(const float n) {
    fixed_point = roundf(n * (1 << scaler));
}

// assignment operator
Fixed& Fixed::operator= (const Fixed& obj) {
    fixed_point = obj.getRawBits();
    return *this;
}

// member functions
float Fixed::toFloat( void ) const {
    return (float)fixed_point / (1 << scaler);
}

int Fixed::toInt( void ) const {
    return roundf(fixed_point / (1 << scaler));
}

int Fixed::getRawBits( void ) const {
    return fixed_point;
}
void Fixed::setRawBits( int const raw ) {
    fixed_point = raw;
}

Fixed::~Fixed() {
}

// comparison operators overlading
bool Fixed::operator < (const Fixed& f) const {
    return (this->fixed_point < f.getRawBits());
}

bool Fixed::operator > (const Fixed& f) const {
    return (this->fixed_point > f.getRawBits());
}

bool Fixed::operator <= (const Fixed& f) const {
    return (this->fixed_point <= f.getRawBits());
}

bool Fixed::operator >= (const Fixed& f) const {
    return (this->fixed_point >= f.getRawBits());
}

bool Fixed::operator == (const Fixed& f) const {
    return (this->fixed_point == f.getRawBits());
}

bool Fixed::operator != (const Fixed& f) const {
    return (this->fixed_point != f.getRawBits());
}


// arithmetic operator overloading
Fixed Fixed::operator + (const Fixed& f) const {
    Fixed res;
    res.setRawBits(this->fixed_point + f.getRawBits());
    return res;
}

Fixed Fixed::operator - (const Fixed& f) const {
    Fixed res;
    res.setRawBits(this->fixed_point - f.getRawBits());
    return res;
}

Fixed Fixed::operator * (const Fixed& f) const {
    Fixed res;
    res.setRawBits((this->fixed_point * f.getRawBits()) / (1 << scaler));
    return res;
}

Fixed Fixed::operator / (const Fixed& f) const {
    Fixed res;
    res.setRawBits((this->fixed_point / f.getRawBits()) * (1 << scaler));
    return res;
}

// increment/decrement operators overloading
Fixed& Fixed::operator ++ () {
    this->fixed_point += 1;
    return *this;
}

Fixed Fixed::operator ++ (int) {
    Fixed tmp;
    tmp.setRawBits(this->fixed_point);
    this->fixed_point += 1;
    return tmp;
}

Fixed& Fixed::operator -- () {
    this->fixed_point -= 1;
    return *this;
}

Fixed Fixed::operator -- (int) {
    Fixed tmp;
    tmp.setRawBits(this->fixed_point);
    this->fixed_point -= 1;
    return tmp;
}

// max/min member functions
Fixed& Fixed::min (Fixed& a, Fixed& b) {
    if (a.getRawBits() > b.getRawBits())
        return b;
    else 
        return a;
}

const Fixed& Fixed::min (const Fixed& a, const Fixed& b) {
    if (a.getRawBits() > b.getRawBits())
        return b;
    else 
        return a;
}

Fixed& Fixed::max (Fixed& a, Fixed& b) {
    if (a.getRawBits() > b.getRawBits())
        return a;
    else 
        return b;
}

const Fixed& Fixed::max (const Fixed& a, const Fixed& b) {
    if (a.getRawBits() > b.getRawBits())
        return a;
    else 
        return b;
}


// output stream overloading
std::ostream& operator<<(std::ostream& out, const Fixed& f) {
    out << f.toFloat();
    return out;
}