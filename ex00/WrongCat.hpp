#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat& t);
        WrongCat& operator=(const WrongCat& t);
        void makeSound(void) const;
        std::string getType(void) const; 
};

#endif