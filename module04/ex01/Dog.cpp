#include "Dog.hpp"

Dog::Dog() : Animal("dog")
{
	this->_type = "dog";
	std::cout << "Dog created" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog & dog)
{
	std::cout << "Copy Dog" << std::endl;
	this->operator=(dog);
}

Dog::~Dog()
{
	std::cout << "Dog destroyed" << std::endl;
	delete this->_brain;
}

Dog & Dog::operator=(const Dog & dog)
{
	this->_brain = new Brain();
	this->_type = dog.getType();
	for (int i = 0; i < 100; i++)
		this->_brain->getIdeas()[i] = dog._brain->getIdeas()[i];
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Dog say 'woof'" << std::endl;
}