#include "Form.hpp"

Form::Form(): _name("Form"), _is_signed(false),
_sign_grade(GRADE_MAX), _execute_grade(GRADE_MAX)  {
    std::cout << "From Default Constructor Called" << std::endl;
}

Form::Form(std::string name, int is_signed, int sign_grade, int execute_grade):
        _name(name), _is_signed(is_signed),
        _sign_grade(sign_grade), _execute_grade(execute_grade) {
    if (_sign_grade > GRADE_MAX || execute_grade > GRADE_MAX)
        throw Form::GradeTooHighException();
    if (_sign_grade < GRADE_MIN || execute_grade < GRADE_MIN)
        throw Form::GradeTooLowException();
}

Form::Form(const Form& obj): _name("Form"), _sign_grade(GRADE_MAX),
        _execute_grade(GRADE_MAX) {
    *this = obj;
}

Form& Form::operator = (const Form& obj) {
    _is_signed = obj._is_signed;
    return *this;
}

std::string Form::getName() const {
    return _name;
}

bool Form::getIsSigned() const {
    return _is_signed;
}

int Form::getSignGrade() const {
    return _sign_grade;
}

int Form::getExectureGrade() const {
    return _execute_grade;
}

void Form::beSigned(const Bureaucrat& b) {
    if (b.getGrade() <= _sign_grade)
        _is_signed = true;
    else 
        throw Form::GradeTooLowException();
}

const char* Form::GradeTooLowException::what() const throw() {
    return "This grade is too Low";
}

const char* Form::GradeTooHighException::what() const throw() {
    return "This grade is too High";
}

Form::~Form() {
    std::cout << "Form Destructor Called" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Form& f) {
    out << "Name: " << f.getName() << std::endl;
    out << "Is signed: "<< f.getIsSigned() << std::endl;
    out << "Sign grade: " << f.getSignGrade() << std::endl;
    out << "Execute grade: " << f.getExectureGrade();

    return out;
}
