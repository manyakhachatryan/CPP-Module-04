#include "Character.hpp"

Character::Character()
{
    _name = "default name";
    for(int i = 0; i<4; i++)
    {
        materias[i] = NULL;
    }
    std::cout<<"Default constructor called - Character"<<std::endl;
}

Character::Character(std::string t)
{
    _name = t;
    for(int i = 0; i<4; i++)
    {
        materias[i] = NULL;
    }
    std::cout<<"Constructor with parameter called - Character"<<std::endl;
}

Character::~Character()
{

}

Character::Character(const Character& t)
{
    this->_name = t._name;
    for(int i = 0; i<4; i++)
    {
        if(t.materias[i]!=NULL)
            this->materias[i] = t.materias[i]->clone();
    }
 std::cout<<"Copy Constructor  called - Character"<<std::endl;
}

Character& Character::operator=(const Character& t)
{
    if(this != &t)
    {
        this->_name = t._name;
        
        for(int i = 0; i<4; i++)
        {
            delete this->materias[i];
            if(t.materias[i]!=NULL)
            {
                this->materias[i] = t.materias[i]->clone();
            }
            else
            {
                this->materias[i] = NULL;
            }
        }

    }
    std::cout<<"Copy assignment operator  called - Character"<<std::endl;
    return (*this);
}


std::string const & Character::getName() const
{
    return _name;
}

void Character::equip(AMateria* m)
{
    for(int i = 0; i < 4; i++)
    {
        if(materias[i]==NULL)
        {
            materias[i]=m;
            return;
        } 
    }
    std::cout<<"Can not uquip"<<std::endl;
}
        
void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
    {
        std::cout << "Invalid index"<<std::endl;
        return ;
    }
    if(materias[idx]==NULL)
    {
        std::cout << "No materia"<<std::endl;
    }
    for(int  i = 0; i < 4; ++i)
    {
        if ( materias_floor[i] == NULL)
        {
            materias_floor[i] = materias[idx];
            materias[idx] = NULL;
            return ;
        }
    }
}

void Character::use(int idx, ICharacter& target)
{
// std::cout<<materias[idx]<<std::endl;
  if (idx >= 0 && idx < 4 && materias[idx] != NULL)
  {
       materias[idx]->use(target);
  }

}