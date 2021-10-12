#include "Intern.hpp"

/* -----------------------------------------------------
|	Констурктор по-умолчанию, копирования и деструктор	|
-------------------------------------------------------- */

Intern::Intern() {}

Intern::Intern(Intern const & src)
{
	this->operator=(src);
}

Intern::~Intern() {}

/* -------------------------------------
|	Перегрузка оператора присваивания	|
---------------------------------------- */

Intern &Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return (*this);
}

/* ---------------------
|	Методы класса Intern	|
------------------------ */

Form *Intern::makeShrubbery(std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

Form *Intern::makeRobotomy(std::string &target)
{
	return (new RobotomyRequestForm(target));
}

Form *Intern::makePresidential(std::string &target)
{
	return (new PresidentialPardonForm(target));
}

Form*	Intern::makeForm( std::string name, std::string target)
{
	std::string	formsNames[3] = {"shrubbery", "robotomy", "presidential_pardon"};
	Funcs forms[3] = {&Intern::makeShrubbery, &Intern::makeRobotomy, 
		&Intern::makePresidential};

	for (int i = 0; i < 3; i++)
	{
		if (name == formsNames[i])
		{
			std::cout << "Intern creates " + name << std::endl;
			return (this->*forms[i])(target);
		}
	}
	throw Intern::FormNotFound();
}

/* -----------------------------
|	Перегрузка оператора what	|
-------------------------------- */

const char	*Intern::FormNotFound::what() const throw()
{
	return ("Form not found!");
}