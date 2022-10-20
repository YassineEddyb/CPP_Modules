#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>
#include <iostream>

class Fixed {
    private:
        int fixed_point;
        static const int scaler = 8;
    public:
        Fixed();
        Fixed(const Fixed& obj);
        Fixed& operator= (const Fixed& obj);

        Fixed(const int n);
        Fixed(const float n);

        int getRawBits( void ) const;
        void setRawBits( int const raw );

        float toFloat( void ) const;
        int toInt( void ) const;

        // coparison operators overloading
        bool operator < (const Fixed& f) const;
        bool operator > (const Fixed& f) const;
        bool operator <= (const Fixed& f) const;
        bool operator >= (const Fixed& f) const;
        bool operator == (const Fixed& f) const;
        bool operator != (const Fixed& f) const;

        // arithmetic operators overloading
        Fixed operator + (const Fixed& f) const;
        Fixed operator - (const Fixed& f) const;
        Fixed operator * (const Fixed& f) const;
        Fixed operator / (const Fixed& f) const;

        // increment/decrement operators overloading
        Fixed& operator ++ ();
        Fixed operator ++ (int);
        Fixed& operator -- ();
        Fixed operator -- (int);

        // max/min member functions
        // static Fixed& min (Fixed& a, Fixed& b);
        static const Fixed& min (const Fixed& a, const Fixed& b);
        // static Fixed& max (Fixed& a, Fixed& b);
        static const Fixed& max (const Fixed& a, const Fixed& b);

        ~Fixed();
};

std::ostream& operator<<(std::ostream& out, const Fixed& f);

#endif