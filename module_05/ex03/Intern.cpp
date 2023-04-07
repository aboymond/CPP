
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(Intern const &cpy) : _formName(cpy._formName) {
	*this = cpy;
}

Intern &Intern::operator=(Intern const &rhs) {
	if (this != &rhs){
		*this = rhs;
	}
	return (*this);
}

AForm* Intern::makeForm(std::string formName, std::string target) {
	std::string form[3] = {"Presidential pardon", "Robotomy request", "Shrubbery creation"};
	AForm* (Intern::*ptr_form[3]) (std::string) = {&Intern::president, &Intern::robot, &Intern::shrubb};
	_formName = formName;
	for (int i = 0; i < 3; i++)
		if (form[i] == formName)
			return ((this->*ptr_form[i])(target));
	return NULL;
}
AForm*	Intern::president(std::string target){
	std::cout << "Intern creates " << _formName << std::endl;
	return (new PresidentialPardonForm(target));
}

AForm*	Intern::robot(std::string target){
	std::cout << "Intern creates " << _formName << std::endl;
	return (new RobotomyRequestForm(target));
}

AForm*	Intern::shrubb(std::string target){
	std::cout << "Intern creates " << _formName << std::endl;
	return (new ShrubberyCreationForm(target));
}