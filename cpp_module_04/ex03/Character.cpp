#include "Character.hpp"

Character::Character(void) : _name("Default"), garbage_index(0), garbage_size(1)
{
    std::cout << "Character Default constructor" << std::endl;
    garbage = new AMateria*[garbage_size];
    for (int i = 0; i < 4; ++i)
    {
        materias[i] = NULL;
    }
}

Character::Character(std::string const &name) : _name(name), garbage_index(0), garbage_size(1)
{
    std::cout << "Character Constructor with parameters" << std::endl;
    garbage = new AMateria*[garbage_size];
    for (int i = 0; i < 4; ++i)
    {
        materias[i] = NULL;
    }
}

Character::Character(const Character &other)
{
    std::cout << "Character Copy constructor" << std::endl;
    _name = other._name;
    garbage_index = other.garbage_index;
    garbage_size = other.garbage_size;
    garbage = new AMateria*[garbage_size];
    for (int i = 0; i < 4; ++i)
    {
        if (other.materias[i] == NULL)
        {
            materias[i] = NULL;
        }
        else
        {
            materias[i] = other.materias[i]->clone();
        }
    }
}

Character &Character::operator = (const Character &other)
{
    std::cout << "Character Assignment operator" << std::endl;
    if (this != &other)
    {
        _name = other._name;
        garbage_index = other.garbage_index;
        garbage_size = other.garbage_size;
        delete garbage;
        garbage = new AMateria*[garbage_size];
        for (int i = 0; i < 4; ++i)
        {
            if (other.materias[i] == NULL)
            {
                materias[i] = NULL;
            }
            else
            {
                delete materias[i];
                materias[i] = other.materias[i]->clone();
            }
        }
    }
    return *this;
}

Character::~Character(void)
{
    std::cout << "Character Destructor" << std::endl;
    delete garbage;
    for (int i = 0; i < 4; ++i)
    {
        delete materias[i];
    }
    return ;
}

std::string const &Character::getName() const
{
    return _name;
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; ++i)
    {
        if (materias[i] == m)
        {
            return ;
        }
    }
    for (int i = 0; i < 4; ++i)
    {
        if (materias[i] == NULL)
        {
            materias[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    for (int i = 0; i < 4; ++i)
    {
        if (materias[i] != NULL && i == idx)
        {
            if (garbage_index >= garbage_size)
            {
                garbage_size *= 2;
                AMateria **temp = new AMateria*[garbage_size];
                for (int j = 0; j < garbage_index - 1; ++j)
                {
                    temp[j] = garbage[j];
                }
            }
            garbage[garbage_index] = materias[i];
            materias[i] = NULL;
            garbage_index += 1;
        }
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx <= 4 && materias[idx] != NULL)
    {
        materias[idx]->use(target);
    }
}