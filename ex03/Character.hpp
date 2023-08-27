#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    public:
        Character();
        Character(std::string t);
        ~Character();
        Character(const Character& t);
        Character& operator=(const Character& t);

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
    private:    
        std::string _name;
        AMateria* materias[4];
        AMateria* materias_floor[4];
};

#endif

