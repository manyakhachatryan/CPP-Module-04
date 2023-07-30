#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        ~Dog();
        Dog(const Dog& t);
        Dog& operator=(const Dog& t);
        void makeSound(void) const;
        std::string getType(void) const; 
};

#endif