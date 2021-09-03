#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat &wrong_c);
	virtual ~WrongCat();

	void	makeSound() const;
};