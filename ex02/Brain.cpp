#include "Brain.hpp"

Brain::Brain()
{
    for(int i = 0; i < 100; i++)
    {
        ideas[i] = "Empty";
    }
    std::cout<<"Default constructor called - Brain"<<std::endl;
}

Brain::~Brain()
{
    std::cout<<"Destructor called - Brain"<<std::endl;
}

Brain::Brain(const Brain& t)
{
    for(int i = 0; i < 100; i++)
    {
        ideas[i] = t.ideas[i];
    }
    std::cout<<"Copy constructor called - Brain"<<std::endl;
}

Brain& Brain::operator=(const Brain& t)
{
    if(this != &t)
    {
        for(int i = 0; i < 100; i++)
        {
            ideas[i] = t.ideas[i];
        }
        std::cout<<"Copy assignment operator called - Brain"<<std::endl;
    }
    return (*this);
}