#pragma once

#include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &cp);
	~PresidentialPardonForm();

	PresidentialPardonForm	&operator=(const PresidentialPardonForm &rhs);

	void execute(const Bureaucrat &executor) const;
};