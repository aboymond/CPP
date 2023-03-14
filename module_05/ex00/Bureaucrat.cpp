
#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) {
	this->_name = name;
	this->_grade = grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat const &cpy) {
	*this = cpy;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {}

Bureaucrat::GradeTooHighExeption(){
	std::cout << "Grade too high" << std::endl;
}

Bureaucrat::GradeTooLowExeption(){
	std::cout << "Grade too low" << std::endl;
}

int Bureaucrat::getGrade() const {
	return (this->_grade);
}

std::string Bureaucrat::getName() const {
	return (this->_name);
}
