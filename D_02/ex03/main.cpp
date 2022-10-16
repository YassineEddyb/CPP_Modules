#include "Point.hpp"

int main( void ) {
    // inside
    {
        Point A(1, 1);
        Point B(20, 20);
        Point C(30, 0);
        Point P(10, 10);

        std::cout << bsp(A, B, C, P) << std::endl;
    }
    // inside on the line
    {
        Point A(1, 1);
        Point B(20, 20);
        Point C(30, 0);
        Point P(1, 1);

        std::cout << bsp(A, B, C, P) << std::endl;
    }
    // outside
    {
        Point A(1, 1);
        Point B(20, 20);
        Point C(30, 0);
        Point P(100, 100);

        std::cout << bsp(A, B, C, P) << std::endl;
    }
}