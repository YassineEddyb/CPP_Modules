# ifndef SHRUBBERYCREATIONFORM
# define SHRUBBERYCREATIONFORM

#include "Form.hpp"
#include <string>
#include <iostream>
#include <fstream>

class ShrubberyCreationForm : public Form {
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& obj);
        ShrubberyCreationForm& operator = (const ShrubberyCreationForm& obj);

        void execute(Bureaucrat const & executor) const;

        ~ShrubberyCreationForm();
};

# endif