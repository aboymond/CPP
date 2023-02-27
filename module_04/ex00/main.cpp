
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(){

	const Animal *animal = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();
//	WrongAnimal *wrongcat = new WrongCat();

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
//	std::cout << wrongcat->getType() << std::endl;
	dog->makeSound();
	cat->makeSound();
//	wrongcat->makeSound();
	animal->makeSound();

	delete dog;
	delete cat;
//	delete wrongcat;
	delete animal;

	return (0);

}