#include "Karen.hpp"

Karen::Karen() {}
Karen::~Karen() {}

void	Karen::_debug(void)
{
	std::cout << "I love to get extra bacon for my"
	<< "7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl
	<< "I just love it!" << std::endl << std::endl;
}

void	Karen::_info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money." << std::endl
	<< "You don’t put enough! If you did I would not have to ask for it!"
	<< std::endl << std::endl;
}

void	Karen::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl
	<< "I’ve been coming here for years and you just started working here last month."
	<< std::endl << std::endl;
}

void	Karen::_error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now."
	<< std::endl << std::endl;
}

void Karen::complain(std::string level)
{
	std::string arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	PointerFunc ptrFunc[4] = {&Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error};

	for(int i = 0; i < 4; i++)
	{
		if (level == arr[i])
		{
			(this->*ptrFunc[i])();
			break ;
		}
	}
}