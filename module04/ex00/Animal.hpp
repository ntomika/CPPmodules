#pragma once

#include <iostream>

class Animal
{
protected:
	std::string	_type;
public:
	Animal();
	Animal(std::string name);
	Animal(const Animal & animal);
	virtual ~Animal();

	Animal &operator=(const Animal & animal);

	virtual void	makeSound() const;
	std::string		getType() const;
};