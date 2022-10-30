#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main () {
    {
        Bureaucrat b("Yassine", 1);

        PresidentialPardonForm f1("f1");
        RobotomyRequestForm f2("f2");
        ShrubberyCreationForm f3("f3");

        try {
            f1.beSigned(b);
            f2.beSigned(b);
            f3.beSigned(b);
        } catch (std::exception& e) {
            std::cout << e.what() << std::endl;
        }

        b.executeForm(f1);
        b.executeForm(f2);
        b.executeForm(f3);
        std::cout << "---------------------------------------------" << std::endl;
    }
    std::cout << "---------------------------------------------" << std::endl;
    {
        Bureaucrat b("Yassine Nadi", 1);
        Bureaucrat b1("Yassine L3yan", 100);

        PresidentialPardonForm f1("f1");
        RobotomyRequestForm f2("f2");
        ShrubberyCreationForm f3("f3");

        try {
            f1.beSigned(b);
            f2.beSigned(b);
        } catch (std::exception& e) {
            std::cout << e.what() << std::endl;
        }

        b1.executeForm(f1);
        b1.executeForm(f2);
        b1.executeForm(f3);
        std::cout << "---------------------------------------------" << std::endl;
    }
}