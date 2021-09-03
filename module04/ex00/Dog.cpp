#include "Dog.hpp"

Dog::Dog() : Animal("dog")
{
	this->_type = "dog";
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(const Dog &dog)
{
	this->operator=(dog);
}

Dog::~Dog()
{
	std::cout << "Dog destroyed" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Dog say 'woof'" << std::endl;
}