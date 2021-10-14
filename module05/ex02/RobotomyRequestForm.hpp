#pragma once

#include "Form.hpp"
#include <cstdlib>

class Bureaucrat;

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &cp);
	~RobotomyRequestForm();

	RobotomyRequestForm	&operator=(const RobotomyRequestForm &rhs);

	void execute(const Bureaucrat &executor) const;
};