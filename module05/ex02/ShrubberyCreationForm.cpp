#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
	Form(target, 100, 50) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cp)
{
	Form::operator=(cp);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & scf)
{
	this->Form::operator=(scf);
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGardeToExecute())
		throw Form::GradeTooHighException();
	if (!this->getGradeToSign())
		throw Form::FormNotSigned();
	std::ofstream file(this->getName() + "_shrubbery");
	file << "____________ ###_______#### " << std::endl
			<< "__________##########__###### " << std::endl
			<< "_________ ##____####__##__### " << std::endl
			<< "_________#######___#####____############## " << std::endl
			<< "________##__###_____###________#_#____##### " << std::endl
			<< "________##_________________#####___#####__# " << std::endl
			<< "________##__________________####___####___# " << std::endl
			<< "______#__ #_________________###___________## " << std::endl
			<< "_____##_###_______________________________### " << std::endl
			<< "_#########_________#____________________#__## " << std::endl
			<< "####___##______#####______#_###_________####### " << std::endl
			<< "##_______________##_______####______________#### " << std::endl
			<< "###________________________##_________________## " << std::endl
			<< "_### _________________##__________________#____## " << std::endl
			<< "__## _____#________#####_______________#####___## " << std::endl
			<< "__## __####_________####________________####____## " << std::endl
			<< "_##___#####______________________________##_____## " << std::endl
			<< "###_____##_____###_######_####_###___##________### " << std::endl
			<< "## ______________#_#___##__#_#_########_______#### " << std::endl
			<< "###_____########___##___#_###_##_#####______#### " << std::endl
			<< "_#################__##__#_#####____########### " << std::endl
			<< "___####________#####_####___##______######## " << std::endl
			<< "_________________###__###_### " << std::endl
			<< "__________________##______## " << std::endl
			<< "__________________##__##__########## " << std::endl
			<< "______________ #####_####_####_######## " << std::endl
			<< "__________#########__##___#________########## " << std::endl
			<< "__############ ___##__#___#____________########## " << std::endl
			<< "##########_______###______#______________________ " << std::endl
			<< "________________ ##_______##_____________________ " << std::endl
			<< "________________##________###____________________ " << std::endl
			<< "______________###__####__##_###__________________ " << std::endl
			<< "______________##__##__##__#__###________________ " << std::endl
			<< "____________ ##__##____##_#___##_________________" << std::endl;
	
	std::cout << "file done" << std::endl;
}