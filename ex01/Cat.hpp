#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        virtual ~Cat();
        Cat(const Cat& t);
        Cat& operator=(const Cat& t);
        void makeSound(void) const;
        std::string getType(void) const; 
    private:
        Brain* _brain;
};

#endif