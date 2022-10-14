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

        ~Fixed();
};

std::ostream& operator<<(std::ostream& out, const Fixed& f);

#endif