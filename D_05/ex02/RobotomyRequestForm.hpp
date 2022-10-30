# ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <string>
#include <iostream>


class RobotomyRequestForm : public Form {
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& obj);
        RobotomyRequestForm& operator = (const RobotomyRequestForm& obj);

        void execute(Bureaucrat const & executor) const;

        ~RobotomyRequestForm();
};

# endif