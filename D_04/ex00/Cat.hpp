#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal {
    public:
        Cat();
        Cat(const Cat& obj);
        Cat& operator = (const Cat& obj);

        void makeSound(void) const;

        ~Cat();
};

# endif