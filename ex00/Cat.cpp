#include "Cat.hpp"

#include  "Animal.hpp"

Cat::Cat()
{
    _type = "Cat";
    std::cout<<"Default constructor called - Cat"<<std::endl;
}

Cat::~Cat()
{
    std::cout<<"Destructor called - Cat"<<std::endl;
}

Cat::Cat(const Cat& t)
{
    _type = t._type;
    std::cout<<"Copy constructor called - Cat"<<std::endl;
}

Cat& Cat::operator=(const Cat& t)
{
    if(this != &t)
    {
        _type = t._type;
        std::cout<<"Copy assignment operator called - Cat"<<std::endl;
    }
    return (*this);
}

void Cat::makeSound(void) const 
{
     std::cout<<"Cat make sound"<<std::endl;
}

std::string Cat::getType(void) const
{
    return _type;
} 