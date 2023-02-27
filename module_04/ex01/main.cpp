
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(){

	Animal *animal = new Animal();
	//WrongAnimal *wrongcat = new WrongCat();
	Animal *dog = new Dog();
	Animal *cat = new Cat();

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	//std::cout << wrongcat->getType() << std::endl;
	dog->makeSound();
	cat->makeSound();
	//wrongcat->makeSound();
	animal->makeSound();

	delete dog;
	delete cat;
	//delete wrongcat;

	std::cout << "MANDATORY" << std::endl;

	Dog *fog2 = new Dog();
	//Cat	cat2 = Cat();



	return (0);

}