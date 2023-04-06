
#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

class PresidentialPardonForm;
#include "Form.hpp"

class PresidentialPardonForm : public AForm {

private:
	std::string	_target;
protected:
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &cpy);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
	~PresidentialPardonForm();

	std::string getTarget() const;
	void		execute(Bureaucrat const &executor) const;
};

#endif
