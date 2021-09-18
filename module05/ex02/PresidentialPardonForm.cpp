#include "PresidentialPardonForm.hpp"

/* -----------------------------
|	Констуркторы и деструктор	|
--------------------------------*/

PresidentialPardonForm::PresidentialPardonForm() :
	Form() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
	Form(target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) :
	Form(src) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

/* -------------------------------------
|	Перегрузка оператора присваивания	|
---------------------------------------- */

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	this->Form::operator=(rhs);
	return (*this);
}

/* -------------------------------------
|	Метод класса RobotomyRequestForm	|
---------------------------------------- */

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->getGardeToExecute())
		throw Form::GradeTooHighException();
	if (!this->getGradeToSign())
		throw Form::FormNotSigned();
	std::cout << this->getName() <<
	"has been pardoned by Zafod Beeblebrox" << std::endl;
}