#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal* animal[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
		animal[i]->makeSound();
		std::cout << std::endl;
	}
	std::cout << std::endl;


	for (int i = 0; i < 10; i++)
		delete animal[i];

	std::cout << std::endl;
	std::cout << std::endl;

	Cat cat1;
	{
		Cat cat2 = cat1;
	}
	std::cout << "The end of the scope:" << std::endl;

	return 0;
}