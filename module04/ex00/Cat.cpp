#include "Cat.hpp"

Cat::Cat() : Animal("cat")
{
	this->_type = "cat";
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat &cat)
{
	this->operator=(cat);
}

Cat::~Cat()
{
	std::cout << "Cat destroyed" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Cat say 'meow'" << std::endl;
}