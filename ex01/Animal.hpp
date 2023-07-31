#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream> 
#include "Brain.hpp"
class Animal
{
    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal& t);
        Animal& operator=(const Animal& t);
        virtual void makeSound(void) const;
        virtual std::string getType(void) const; 
    protected:
        std::string _type;
};

#endif