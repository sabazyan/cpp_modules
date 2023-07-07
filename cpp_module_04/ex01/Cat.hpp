#ifndef CAT_HPP
#define CAT_HPP
#include "iostream"
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(const Cat &);
        Cat &operator = (const Cat &);
        ~Cat(void);
        void makeSound(void) const;
    private:
        Brain *_brain;
};

#endif