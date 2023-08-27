#include "Ice.hpp"

Ice::Ice()
{
    std::cout<<"Default constructor called - Ice"<<std::endl;
    _type = "ice";
}

Ice::~Ice()
{
    std::cout<<"Destructor called - Ice"<<std::endl;
}

Ice::Ice(const Ice& t)
{
    std::cout<<"Copy constructor called - Ice"<<std::endl;
    _type = t._type;
}

Ice& Ice::operator=(const Ice& t)
{
    std::cout<<"Copy assignment operator called - Ice"<<std::endl;
    if(this != &t)
    {
        _type = t._type;
    }
    return (*this);
}

Ice* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& t)
{
    std::cout<<"* shoots an ice bolt at "<<t.getName()<<" *"<<std::endl;
}


