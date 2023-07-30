#include "Dog.hpp"

#include  "Animal.hpp"

Dog::Dog()
{
    _type = "Dog";
    std::cout<<"Default constructor called - Dog"<<std::endl;
}

Dog::~Dog()
{
    std::cout<<"Destructor called - Dog"<<std::endl;
}

Dog::Dog(const Dog& t)
{
    _type = t._type;
    std::cout<<"Copy constructor called - Dog"<<std::endl;
}

Dog& Dog::operator=(const Dog& t)
{
    if(this != &t)
    {
        _type = t._type;
        std::cout<<"Copy assignment operator called - Dog"<<std::endl;
    }
    return (*this);
}

void Dog::makeSound(void) const 
{
     std::cout<<"Dog make sound"<<std::endl;
}

std::string Dog::getType(void) const
{
    return _type;
} 