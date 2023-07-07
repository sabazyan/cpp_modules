#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal* animals[2];
    for (int i = 0; i < 2; ++i)
    {
        if (i % 2 == 0)
        {
            animals[i] = new Dog();
        }
        else
        {
            animals[i] = new Cat();
        }
    }
    std::cout << std::endl;

    for (int i = 0; i < 2; ++i)
    {
        animals[i]->makeSound();
    }
    std::cout << std::endl;

    for (int i = 0; i < 2; ++i)
    {
        delete animals[i];
    }
    return 0;
}