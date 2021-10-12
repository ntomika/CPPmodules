#pragma once

#include <iostream>
#include <string>
#include <exception>
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

class ShrubberyCreationForm;
class PresidentialPardonForm;
class RobotomyRequestForm;

class Intern
{
private:
	Form* makeShrubbery(std::string& target);
	Form* makeRobotomy(std::string& target);
	Form* makePresidential(std::string& target);
public:

	Intern();
	Intern(Intern const & src);
	~Intern();

	Intern &operator=(Intern const & rhs);

	Form*	makeForm(std::string name, std::string target);

	class FormNotFound : public std::exception
	{
		public:
			const char* what() const throw();
	};
};

typedef	Form*	(Intern::*Funcs)(std::string &);