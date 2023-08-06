#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource(void);
        MateriaSource(const MateriaSource &other);
        MateriaSource &operator = (const MateriaSource &other);
        ~MateriaSource(void);

        void learnMateria(AMateria *);
        AMateria *createMateria(std::string const &type);
    private:
        AMateria *materias[4];
};

#endif