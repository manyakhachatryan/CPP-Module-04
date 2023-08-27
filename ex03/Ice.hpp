#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        ~Ice();
        Ice(const Ice& t);
        Ice& operator=(const Ice& t);
        Ice* clone() const;
        void use(ICharacter&);

};

#endif