#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain was added" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 != 0)
			ideas[i] = "sleep";
		else
			ideas[i] = "eat";
	}
}

std::string	*Brain::getIdeas()
{
	return this->ideas;
}

Brain::~Brain()
{
	std::cout << "Brain was deleted" << std::endl;
}