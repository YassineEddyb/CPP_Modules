#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        WrongCat(const WrongCat& obj);
        WrongCat& operator = (const WrongCat& obj);

        void makeSound(void) const;

        ~WrongCat();
};

# endif