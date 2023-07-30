#include "WrongCat.hpp"

#include  "WrongAnimal.hpp"

WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout<<"Default constructor called - WrongCat"<<std::endl;
}

WrongCat::~WrongCat()
{
    std::cout<<"Destructor called - WrongCat"<<std::endl;
}

WrongCat::WrongCat(const WrongCat& t)
{
    _type = t._type;
    std::cout<<"Copy constructor called - WrongCat"<<std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& t)
{
    if(this != &t)
    {
        _type = t._type;
        std::cout<<"Copy assignment operator called - WrongCat"<<std::endl;
    }
    return (*this);
}

void WrongCat::makeSound(void) const 
{
     std::cout<<"WrongCat make sound"<<std::endl;
}

std::string WrongCat::getType(void) const
{
    return _type;
} 