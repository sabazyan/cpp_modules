#ifndef CURE_HPP
#define CURE_HPP
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
    public:
        Cure(std::string const &type);
        Cure(const Cure &);
        Cure &operator = (const Cure &);
        ~Cure(void);

        void use(ICharacter &target);
    private:
};

#endif