# ifndef AMATERIA_CPP
# define AMATERIA_CPP

#include "ICharacter.hpp"
#include <iostream>
#include <string>


class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria();
        AMateria(const AMateria& obj);
        AMateria& operator = (const AMateria& obj);
        
        AMateria(std::string const & type);
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

        ~AMateria();
};


# endif