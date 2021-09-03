#pragma once

#include <iostream>

class WrongAnimal
{
protected:
	std::string	_type;
public:
	WrongAnimal();
	WrongAnimal(std::string name);
	WrongAnimal(const WrongAnimal & wrong_a);
	virtual ~WrongAnimal();

	WrongAnimal &operator=(const WrongAnimal & wromg_a);

	virtual void	makeSound() const;
};
