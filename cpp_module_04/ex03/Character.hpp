#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream> 
#include "ICharacter.hpp"

class Character : public ICharacter
{
    public:
        Character(void);
        Character(std::string const &name);
        Character(const Character &other);
        Character &operator = (const Character &other);
        ~Character(void);

        std::string const &getName() const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
    private:
        std::string _name;
        AMateria *materias[4];
        AMateria **garbage;
        int garbage_index;
        int garbage_size;
};

#endif