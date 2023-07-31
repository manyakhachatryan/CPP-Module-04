#include  "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    _type = "Empty";
    std::cout<<"Default constructor called - WrongAnimal"<<std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout<<"Destructor called - WrongAnimal"<<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& t)
{
    _type = t._type;
    std::cout<<"Copy constructor called - WrongAnimal"<<std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& t)
{
    if(this != &t)
    {
        _type = t._type;
        std::cout<<"Copy assignment operator called - WrongAnimal"<<std::endl;
    }
    return (*this);
}

void WrongAnimal::makeSound(void) const 
{
     std::cout<<"WrongAnimal make sound"<<std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return _type;
} 
