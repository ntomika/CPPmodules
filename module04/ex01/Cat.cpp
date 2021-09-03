#include "Cat.hpp"

Cat::Cat() : Animal("cat")
{
	this->_type = "cat";
	std::cout << "Cat created" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat & cat)
{
	std::cout << "Copy Cat" << std::endl;
	this->operator=(cat);
}

Cat::~Cat()
{
	std::cout << "Cat destroyed" << std::endl;
	delete this->_brain;
}

void	Cat::makeSound() const
{
	std::cout << "Cat say 'meow'" << std::endl;
}

Brain*	Cat::getBrain( void )
{
	return this->_brain;
}

Cat & Cat::operator=(const Cat & cat)
{
	this->_brain = new Brain();
	this->_type = cat.getType();
	for (int i = 0; i < 100; i++)
		this->_brain->getIdeas()[i] = cat._brain->getIdeas()[i];
	return *this;
}
