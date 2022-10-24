# ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>

class Form {
    private:
        const std::string _name;
        bool _is_signed;
        const int _sign_grade;
        const int _execute_grade;
    public:
        Form();
        Form(const Form& obj);
        Form& operator = (const Form& obj);
        std::string getName();
        bool getIsSigned();
        int getSignGrade();
        int getExectureGrade();
        ~Form();
};

# endif