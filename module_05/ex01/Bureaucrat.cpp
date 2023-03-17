
#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name), _grade(grade){
	std::cout << "|----- Create \33[34m" << name << "\33[0m grade \33[33m" << grade << "\33[0m -----|" << std::endl;
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
	return ("\33[31m\tGrade too high !\33[0m");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return ("\33[31m\tGrade too low !\33[0m");
}

int Bureaucrat::getGrade() const {
	return (this->_grade);
}

std::string Bureaucrat::getName() const {
	return (this->_name);
}

void	Bureaucrat::incrementation() {
	this->_grade--;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "\33[32m ⬆️️\33[0m";

}

void	Bureaucrat::decrementation() {
	this->_grade++;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "\33[31m ⬇️\33[0m";
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs ){
	o << "\33[34m" << rhs.getName() << "\33[0m, bureaucrat grade \33[33m" << rhs.getGrade() << "\33[0m";
	return (o);
}