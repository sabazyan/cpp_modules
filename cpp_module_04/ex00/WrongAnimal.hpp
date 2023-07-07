#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include "iostream"

class WrongAnimal
{
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal &);
        WrongAnimal &operator = (const WrongAnimal &);
        virtual ~WrongAnimal(void);
        void setType(std::string);
        std::string getType(void) const;
        void makeSound(void) const;
    protected:
        std::string _type;
};

#endif