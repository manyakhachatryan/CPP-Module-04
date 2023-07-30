#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream> 

class WrongAnimal
{
    public:
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(const WrongAnimal& t);
        WrongAnimal& operator=(const WrongAnimal& t);
        void makeSound(void) const;
        virtual std::string getType(void) const; 
    protected:
        std::string _type;
};

#endif