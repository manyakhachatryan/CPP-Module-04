#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;
class AMateria
{
    protected:
        AMateria();
        std::string _type;
    public:
        AMateria(std::string const & type);
        virtual ~AMateria();
        AMateria(const AMateria& t);
        AMateria& operator=(const AMateria& t);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif