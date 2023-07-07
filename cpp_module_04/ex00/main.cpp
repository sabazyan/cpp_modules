#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << animal->getType() << std::endl;
    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;
    
    animal->makeSound();
    dog->makeSound();
    cat->makeSound();

    delete animal;
    delete dog;
    delete cat;

    // const WrongAnimal* animal = new WrongAnimal();
    // const WrongAnimal* cat = new WrongCat();

    // std::cout << animal->getType() << std::endl;
    // std::cout << cat->getType() << std::endl;

    // animal->makeSound();
    // cat->makeSound();

    // delete animal;
    // delete cat;
    return 0;
}