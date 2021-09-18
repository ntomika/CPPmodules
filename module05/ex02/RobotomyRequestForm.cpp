#include "RobotomyRequestForm.hpp"

/* -----------------------------
|	Констуркторы и деструктор	|
--------------------------------*/

RobotomyRequestForm::RobotomyRequestForm() :
	Form () {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
	Form (target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) :
	Form(src) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

/* -------------------------------------
|	Перегрузка оператора присваивания	|
---------------------------------------- */

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	this->Form::operator=(rhs);
	return (*this);
}

/* -------------------------------------
|	Метод класса RobotomyRequestForm	|
---------------------------------------- */

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->getGardeToExecute())
		throw Form::GradeTooHighException();
	if (!this->getGradeToSign())
		throw Form::FormNotSigned();
	std::cout << "*some drilling noises*" << std::endl;
	if (rand() % 2 != 0)
		std::cout << this->getName() <<
		" has been robotomized successfully 50% of the time" << std::endl;
	else
		std::cout << "It's a failure" << std::endl;
}