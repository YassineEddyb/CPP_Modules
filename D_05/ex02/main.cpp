#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main () {
    Bureaucrat b1("Yassine", 1);
    Bureaucrat b2("3aziz", 150);
    PresidentialPardonForm f1("f1");
    RobotomyRequestForm f2("f2");
    ShrubberyCreationForm f3("f3");

    f1.beSigned(b1);
    f2.beSigned(b1);
    f3.beSigned(b1);

    try
    {
        b1.executeForm(f1);
        b1.executeForm(f2);
        b1.executeForm(f3);
        b2.executeForm(f1);
        b2.executeForm(f2);
        b2.executeForm(f3);
    }
    catch(const Form::FormNotSigned& e) {
        std::cerr << e.what() << '\n';
    }
}