#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include "iostream"

class Animal
{
    public:
        Animal(void);
        Animal(const Animal &);
        Animal &operator = (const Animal &);
        virtual ~Animal(void);
        void setType(std::string);
        std::string getType(void) const;
        virtual void makeSound(void) const = 0;
    protected:
        std::string _type;
};

#endif