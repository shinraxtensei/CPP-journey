#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void) {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete i;
    delete j;

    std::cout << "------------------------------------------------------" << std::endl;
    std::cout  << YELLOW << "time for Wrogn shit" << RESET <<  std::endl;
      std::cout << "------------------------------------------------------" << std::endl;

    const WrongAnimal* meta2 = new WrongAnimal();
    const WrongAnimal *k = new WrongCat();
    meta2->makeSound();
    k->makeSound(); // will output wrong sound;
    delete k;
    delete meta2;
}