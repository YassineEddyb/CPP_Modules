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

std::string Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
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

void Bureaucrat::signForm(Form& form) const {
    try {
        form.beSigned(*this);
        std::cout << _name + " signed " + form.getName() << std::endl;
    } catch (std::exception& e) {
        std::cout << _name + " could't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(Form const & form) const {
    try {
        form.execute(*this);
        std::cout << _name + " executed " + form.getName() << std::endl;
    }
    catch(const std::exception& e) {
        std::cerr << "execute failed because " << e.what() << std::endl;
    }
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "This grade is too Low";
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "This grade is too High";
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat Destructor Called" << std::endl;
}

std::ostream& operator << (std::ostream& out, const Bureaucrat& b) {
    out << "Name: " << b.getName() << std::endl;
    out << "Grade: " << b.getGrade();

    return out;
}