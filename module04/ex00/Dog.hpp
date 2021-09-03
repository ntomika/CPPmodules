#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog & dog); 
	virtual ~Dog();

	void	makeSound() const;
};