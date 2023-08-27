#include "AMateria.hpp"

AMateria::AMateria()
{
   _type = ""; 
    std::cout<<"Default constructor called - AMateria"<<std::endl;
}

AMateria::AMateria(std::string const & type)
{
    _type = type;
    std::cout<<"Parametr constructor called - AMateria"<<std::endl;
}

AMateria::~AMateria()
{
     std::cout<<"Destructor called - AMateria"<<std::endl;
}

AMateria::AMateria(const AMateria& t)
{
    _type = t._type;
    std::cout<<"Copy constructor called - AMateria"<<std::endl;
}

AMateria& AMateria::operator=(const AMateria& t)
{
    std::cout<<"Copy assignment operator called - AMateria"<<std::endl;
    _type = t._type;
    return *this;
}

const std::string& AMateria::getType() const
{
    return _type;
}

void AMateria::use(ICharacter& target)
{
    (void) target;
    std::cout<<"This type does not exist"<<std::endl;
}