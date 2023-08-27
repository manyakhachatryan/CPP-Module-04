#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource& op);
        MateriaSource& operator=(const MateriaSource& op);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
    private:
        AMateria *array[4];
};

#endif