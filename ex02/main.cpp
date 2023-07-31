#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include "Brain.hpp"

int main()
{
    Animal *arr[5];
    for(int i = 0; i < 5; i++)
    {
        if(i % 2 == 0)
            arr[i] = new Cat();
        else 
            arr[i] = new Dog();
    }

    for(int i = 0; i < 5; i++)
    {
       delete arr[i];
    }
    
    //Animal *a = new Animal();
    
    return 0;
}


  