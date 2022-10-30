# ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class Bureaucrat;

class Form {
    private:
        const std::string _name;
        bool _is_signed;
        const int _sign_grade;
        const int _execute_grade;
    protected:
        std::string _target;
    public:
        Form();
        Form(const Form& obj);
        Form(std::string name, int is_signed, int sign_grade, int execute_grade);
        Form& operator = (const Form& obj);

        std::string getName() const;
        bool getIsSigned() const;
        int getSignGrade() const;
        int getExectureGrade() const;

        void beSigned(const Bureaucrat& b);
        virtual void execute(Bureaucrat const & executor) const = 0;

        // exception classes
        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw();
        };
        class GradeTooHighException : public std::exception  {
            public:
                const char* what() const throw();
        };

        class FormNotSigned : public std::exception {
            public:
                const char * what() const throw();
        };

        ~Form();
};

std::ostream& operator<<(std::ostream& out, const Form& f);

# endif