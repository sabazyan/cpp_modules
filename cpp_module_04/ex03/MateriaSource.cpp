#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    std::cout << "MateriaSource Constructor" << std::endl;
    for (int i = 0; i < 4; ++i)
    {
        materias[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    std::cout << "MateriaSource Copy constructor" << std::endl;
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

MateriaSource &MateriaSource::operator = (const MateriaSource &other)
{
    std::cout << "MateriaSource Assignment operator" << std::endl;
    if (this != &other)
    {
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

MateriaSource::~MateriaSource(void)
{
    std::cout << "MateriaSource Destructor" << std::endl;
    for (int i = 0; i < 4; ++i)
    {
        delete materias[i];
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; ++i)
    {
        if (materias[i] == NULL)
        {
            materias[i] = m;
            return ;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; ++i)
    {
        if (materias[i] != NULL && materias[i]->getType() == type)
        {
            return materias[i]->clone();
        }
    }
    return 0;
}