#include "Fixed.hpp"

int main () {
    Fixed a;
    Fixed b( a );
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;



    // f1.setRawBits(5);
    // Fixed f2;
    // std::cout << &f2 << std::endl;

    // Fixed f1;
    // f1 = f2;
    // std::cout << &f1 << std::endl;

    // f1.setRawBits(10);
    // f2 = &f1;

    // std::cout << f1.getRawBits() << std::endl;
    // std::cout << f2->getRawBits() << std::endl;
}