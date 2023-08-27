#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(const Cure& t);
        Cure& operator=(const Cure& t);
        Cure* clone() const;
        void use(ICharacter&);

};

#endif