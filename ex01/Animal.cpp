#include  "Animal.hpp"

Animal::Animal()
{
    _type = "Empty";
    std::cout<<"Default constructor called - Animal"<<std::endl;
}

Animal::~Animal()
{
    std::cout<<"Destructor called - Animal"<<std::endl;
}

Animal::Animal(const Animal& t)
{
    _type = t._type;
    std::cout<<"Copy constructor called - Animal"<<std::endl;
}

Animal& Animal::operator=(const Animal& t)
{
    if(this != &t)
    {
        _type = t._type;
        std::cout<<"Copy assignment operator called - Animal"<<std::endl;
    }
    return (*this);
}

void Animal::makeSound(void) const 
{
     std::cout<<"Animal make sound"<<std::endl;
}

std::string Animal::getType(void) const
{
    return _type;
} 
