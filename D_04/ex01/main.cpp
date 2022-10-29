#include "Dog.hpp"
#include "Cat.hpp"

int main () {
    Animal *animals[6];

    for (int i = 0; i < 4; i++) {
        if (i % 2 == 0)
            animals[i] = new Cat();
        else 
            animals[i] = new Dog();
    };    

    for (int i = 0; i < 4; i++)
        animals[i]->makeSound();

    for (int i = 0; i < 4; i++)
        delete animals[i];

    return 0;
}