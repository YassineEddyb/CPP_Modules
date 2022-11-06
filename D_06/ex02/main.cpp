#include <iostream>


class Base {
    public:
        virtual ~Base() {};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base* generate(void) {
    srand(time(0));
    Base *b = NULL;
    int random = rand() % 3;

    switch (random)
    {
        case 0:
            b = new A();
            break;
        case 1:
            b = new B();
            break;
        case 2:
            b = new C();
            break;
        default:
            break;
    }

    return b;
}

void identify(Base* p) {
    A *a = dynamic_cast<A *>(p);
    B *b = dynamic_cast<B *>(p);
    C *c = dynamic_cast<C *>(p);

    if (a)
        std::cout << "A" << std::endl;
    else if (b)
        std::cout << "B" << std::endl;
    else if (c)
        std::cout << "C" << std::endl;
}

void identify(Base& p) {
    try {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A" << std::endl;
    } catch(std::bad_cast& e) {}
    
    try {
        B &b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "B" << std::endl;
    } catch(std::bad_cast& e) {}

    try {
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "C" << std::endl;
    } catch(std::bad_cast& e) {}
}

int main () {
    Base *b = generate();

    identify(b);
    identify(*b);
}