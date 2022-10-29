#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& obj);
        WrongAnimal& operator = (const WrongAnimal& obj);

        std::string getType() const;
        void makeSound(void) const;

        ~WrongAnimal();
};

# endif