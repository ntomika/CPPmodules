#pragma once

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &cp);
	~ShrubberyCreationForm();

	ShrubberyCreationForm & operator=(ShrubberyCreationForm const &scf);

	virtual void	execute(Bureaucrat const & executor) const;
};