#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <string>

class Intern {
    public:
        Intern();
        Intern(const Intern& obj);
        Intern& operator = (const Intern& obj);

        Form* makeForm(std::string name, std::string target) const;

        ~Intern();
};

#endif