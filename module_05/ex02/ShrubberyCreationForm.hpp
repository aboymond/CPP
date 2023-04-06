
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public AForm {
private:
	std::string _target;
protected:
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &cpy);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
    ~ShrubberyCreationForm();

	std::string getTarget() const;
	void		execute(Bureaucrat const &executor) const;
};


#endif
