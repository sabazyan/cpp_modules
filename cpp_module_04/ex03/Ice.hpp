#ifndef ICE_HPP
#define ICE_HPP
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
    public:
        Ice(std::string const &type);
        Ice(const Ice &);
        Ice &operator = (const Ice &);
        ~Ice(void);

        void use(ICharacter &target);
    private:
};

#endif