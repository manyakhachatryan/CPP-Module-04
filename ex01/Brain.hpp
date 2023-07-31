#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    public:
        Brain();
        ~Brain();
        Brain(const Brain& t);
        Brain& operator=(const Brain& t);
        std::string ideas[100];
};

#endif