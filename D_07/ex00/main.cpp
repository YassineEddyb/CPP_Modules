#include "Template.hpp"

class A {
    public:
        int i;
        A(int i): i(i) {};
        A& operator = (const A& a) {i = a.i; return *this;}
        bool operator > (const A& a) const {return this->i > a.i;}
        bool operator >= (const A& a) const {return this->i >= a.i;}
        bool operator < (const A& a) const {return this->i < a.i;}
        bool operator <= (const A& a) const  {return this->i <= a.i;}
};

std::ostream& operator << (std::ostream& out, const A& a) {
    out << a.i;
    return out;
}

int main( void ) {
    int a = 2;
    int b = 3;
    swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    A e(5);
    A f(10);
    swap(e, f);
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
    std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
    return 0;
}
