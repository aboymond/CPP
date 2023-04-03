
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name), _grade(grade), _inc_dec(false){
	std::cout << "\n|----- Create \33[34m" << name << "\33[0m grade \33[33m" << grade << "\33[0m -----|\n" << std::endl;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat const &cpy) {
	*this = cpy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs){
	if (this != &rhs){
	}
	return (*this);
}

const char	*Bureaucrat::GradeTooHighException::what() const throw(){
	return ("\33[31mGrade too high !\33[0m");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return ("\33[31mGrade too low !\33[0m");
}

int Bureaucrat::getGrade() const {
	return (this->_grade);
}

bool	Bureaucrat::getInc_Dec() const {
	return (this->_inc_dec);
}

std::string Bureaucrat::getName() const {
	return (this->_name);
}

void	Bureaucrat::incrementation() {
	this->_grade--;
	this->_inc_dec = true;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	//std::cout << "\33[32m ⬆️️\33[0m";

}

void	Bureaucrat::decrementation() {
	this->_grade++;
	this->_inc_dec = false;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	//std::cout << "\33[31m ⬇️\33[0m";
}

void	Bureaucrat::signForm(Form &form) {
	try
	{
		form.beSigned(*this);
		std::cout << "🖋 \33[34m" << _name << "\33[0m signed \33[34m" << form.getName() << "\33[0m" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << _name << " couldn't sign " << form.getName() << " because ";
		throw GradeTooLowException();
	}
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs ){
	std::string inc_dec;
	if (rhs.getInc_Dec() == true)
		inc_dec = "\33[32m ⬆️️\33[0m";
	else
		inc_dec = "\33[31m ⬇️\33[0m";
	o << inc_dec << "\33[34m" << rhs.getName() << "\33[0m, bureaucrat grade \33[33m" << rhs.getGrade() << "\33[0m";
	return (o);
}