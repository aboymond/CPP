
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(){

//	AAnimal *animal = new AAnimal();
	const AAnimal *AnimalTab[10];
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	//WrongAnimal *wrongcat = new WrongCat();

	for (int i = 0; i < 10; i++){
		if (i % 2)
			AnimalTab[i] = new Dog();
		else
			AnimalTab[i] = new Cat();
		std::cout << "The animal : " << AnimalTab[i]->getType() << " number " << i << std::endl;
		AnimalTab[i]->makeSound();
		std::cout << std::endl;
	}

	delete j;
	delete i;
	//std::cout << cat->getType() << std::endl;
	//std::cout << wrongcat->getType() << std::endl;
	//dog->makeSound();
	//cat->makeSound();
	//wrongcat->makeSound();
	//animal->makeSound();

	std::cout << std::endl;
	for (int i = 0; i < 10; i++){
		std::cout << "The animal : " << AnimalTab[i]->getType() << " has deleted !" << std::endl;
		delete AnimalTab[i];
	}

	std::cout << std::endl;

	//delete wrongcat;

	std::cout << "MANDATORY" << std::endl;

	std::cout << std::endl;

	Dog	dog2 = Dog();
	Cat	cat2 = Cat();

	dog2.DogSay(0);
	cat2.CatSay(1);



	return (0);

}