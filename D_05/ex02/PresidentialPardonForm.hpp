# ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <string>
#include <iostream>

class PresidentialPardonForm : public Form {
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm& obj);
        PresidentialPardonForm& operator = (const PresidentialPardonForm& obj);

        void execute(Bureaucrat const & executor) const;       

        ~PresidentialPardonForm();
};

# endif