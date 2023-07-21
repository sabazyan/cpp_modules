#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream> 
#include "ICharacter.hpp"

class Character : public ICharacter
{
    public:
        Character(void);
        Character(const Character &);
        Character &operator = (const Character &);
        ~Character(void);

        std::string const &getName() const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
    private:
        std::string name;
};

#endif