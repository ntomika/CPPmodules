#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat & cat); 
	virtual ~Cat();

	void	makeSound() const;
};
