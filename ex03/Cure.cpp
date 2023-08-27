#include "Cure.hpp"

Cure::Cure()
{
    std::cout<<"Default constructor called - Cure"<<std::endl;
    _type = "cure";
}

Cure::~Cure()
{
    std::cout<<"Destructor called - Cure"<<std::endl;
}

Cure::Cure(const Cure& t)
{
    _type = t._type;
    std::cout<<"Copy constructor called - Cure"<<std::endl;
}

Cure& Cure::operator=(const Cure& t)
{
    std::cout<<"Copy assignment operator called - Cure"<<std::endl;
    if(this != &t)
    {
        _type = t._type;
    }
    return (*this);
}

Cure* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& t)
{
    std::cout<<"* heals "<<t.getName()<<"’s wounds *"<<std::endl;
}
