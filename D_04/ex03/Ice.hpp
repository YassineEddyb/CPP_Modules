#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria {
    public:
        Ice();
        Ice(const Ice& obj);
        Ice& operator = (const Ice& obj);

        AMateria* clone() const;
        void use(ICharacter& target);

        ~Ice();
};

#endif