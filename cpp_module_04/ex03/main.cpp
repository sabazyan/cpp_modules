#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
    std::cout << "\n- - - - - - - - src - - - - - - - - - - -\n\n";
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    std::cout << "\n- - - - - - - - me - - - - - - - - - - -\n\n";
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    std::cout << "\n- - - - - - - - bob - - - - - - - - - - -\n\n";
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    std::cout << "\n- - - - - - - - destruct - - - - - - - - -\n\n";
    delete bob;
    delete me;
    delete src;

    // Character ch1("CH_1");
    // std::cout << ch1.getName() << std::endl;
    // Character ch2 = ch1;
    // ch2 = ch1;
    // std::cout << ch2.getName() << std::endl;

    // AMateria *c = new Cure();
    // AMateria *i = new Ice();
    // MateriaSource m;
    // m.learnMateria(c);
    // m.learnMateria(i);
    // c = m.createMateria("cure");
    // i = m.createMateria("ice");
    // delete c;
    // delete i;

    // Ice ice;
    // std::cout << ice.getType() << std::endl;
    // MateriaSource ms;
    // ms.createMateria(ice.getType());

    // Character ch("CH");
    // AMateria *c = new Cure;
    // AMateria *c2 = new Cure;
    // AMateria *i = new Ice;
    // AMateria *i2 = new Ice;
    // ch.equip(c);
    // ch.equip(c2);
    // ch.equip(i);
    // ch.equip(i2);
    // ch.unequip(0);
    // ch.unequip(1);
    // ch.unequip(2);
    // ch.unequip(3);
    // delete c;
    // delete c2;
    // delete i;
    // delete i2;

    return 0;
}