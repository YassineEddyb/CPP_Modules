#include "Dog.hpp"
#include "Cat.hpp"

int main () {
     Animal* a = new Cat();
     Animal* b = new Cat();

    std:: cout << a << std::endl << b <<  std::endl;
    *a = *b;
    a->makeSound();
    std:: cout << a << std::endl << b <<  std::endl;

    delete a;
    // delete b;

    return 0;
}