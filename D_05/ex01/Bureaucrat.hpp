#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#define GRADE_MIN 1
#define GRADE_MAX 150

#include "Form.hpp"
#include <iostream>
#include <string>

class Form;

class Bureaucrat {
    private:
        const std::string _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat& obj);
        Bureaucrat(std::string name, int grade);
        Bureaucrat& operator = (const Bureaucrat& obj);

        std::string getName() const;
        int getGrade() const;

        // increment/decrement
        void incrementGrade();
        void decrememtGrade();
        void signForm(Form& form) const;

        // exception classes
        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw();
        };
        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw();
        };

        ~Bureaucrat();
};

std::ostream& operator << (std::ostream& out, const Bureaucrat& b);

#endif