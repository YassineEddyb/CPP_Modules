#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Bureaucrat") {
    std::cout << "Bureaucrat Default Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name) {
    if (grade >= GRADE_MIN && grade <= GRADE_MAX)
        _grade = grade;
    else if (grade > GRADE_MAX)
        throw Bureaucrat::GradeTooHighException();
    else
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) {
    *this = obj;
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& obj) {
    _grade = obj._grade;

    return *this;
}

std::string Bureaucrat::getName () {
    return _name;
}

int Bureaucrat::getGrade() {
    return _grade;
}

void Bureaucrat::incrementGrade() {
    if (_grade > 1)
        _grade--;
    else
        throw Bureaucrat::GradeTooHighException();

}

void Bureaucrat::decrememtGrade() {
    if (_grade < 150)
        _grade++;
    else
        throw Bureaucrat::GradeTooLowException();
}


const char* Bureaucrat::GradeTooLowException::what() const {
    return "This grade is too Low";
}

const char* Bureaucrat::GradeTooHighException::what() const {
    return "This grade is too High";
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat Destructor Called" << std::endl;
}
