#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string	_type;
public:
	WrongAnimal();
	WrongAnimal(std::string name);
	virtual ~WrongAnimal();

	virtual void	makeSound() const;
};

#endif