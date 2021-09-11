#include "Form.hpp"

/* -----------------------------------------------------
|	Констурктор с параметрами, копирования и деструктор	|
-------------------------------------------------------- */

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute) :
		_name(name),
		_gradeToSign(gradeToSign),
		_gradeToExecute(gradeToExecute)
{
	_indication = false;
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form & form) : _gradeToSign(150), _gradeToExecute(150)
{
	this->operator=(form);
}

Form::~Form() {}

/* ---------
|	Геттеры	|
------------ */

std::string const	Form::getName() const
{
	return this->_name;
}

int	Form::getGradeToSign() const
{
	return this->_gradeToSign;
}

int Form::getGardeToExecute() const
{
	return this->_gradeToExecute;
}

bool Form::getIndication() const
{
	return this->_indication;
}

/* ---------------------
|	Методы класса Form	|
------------------------ */

void	Form::beSigned(Bureaucrat & b)
{
	if (b.getGrade() <= this->getGradeToSign())
		this->_indication = true;
	else
		throw Form::GradeTooLowException();
}

/* -------------------------------------
|	Перегрузка оператора присваивания	|
---------------------------------------- */

Form & Form::operator=(const Form & form)
{
	this->_indication = form.getIndication();
	return *this;
}

/* -----------------------------
|	Перегрузка оператора вывода	|
-------------------------------- */

std::ostream& operator<< (std::ostream &out, const Form &form)
{
	out << "Bureaucrat name is " << form.getName()
	<< ", grade required to sign is " << form.getGradeToSign()
	<< " and a grade required to execute is " << form.getGardeToExecute();
	return out;
}

/* -----------------------------
|	Перегрузка оператора what	|
-------------------------------- */

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

