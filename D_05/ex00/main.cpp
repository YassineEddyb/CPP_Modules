#include "Bureaucrat.hpp"

int main () {
    // High grade constructor
    try {
        Bureaucrat c("3aziz", 151);
    } catch (Bureaucrat::GradeTooLowException& e) {
        std::cout << e.what() << std::endl;
    } catch (Bureaucrat::GradeTooHighException& e) {
        std::cout << e.what() << std::endl;
    }

    // Low grade constructor
    try {
        Bureaucrat c("3aziz", 0);
    } catch (Bureaucrat::GradeTooLowException& e) {
        std::cout << e.what() << std::endl;
    } catch (Bureaucrat::GradeTooHighException& e) {
        std::cout << e.what() << std::endl;
    }

    // Decrement grade
    try {
        Bureaucrat c("3aziz", 1);
        c.incrementGrade();
    } catch (Bureaucrat::GradeTooLowException& e) {
        std::cout << e.what() << std::endl;
    } catch (Bureaucrat::GradeTooHighException& e) {
        std::cout << e.what() << std::endl;
    }

    // Increment grade
    try {
        Bureaucrat c("3aziz", 150);
        c.decrememtGrade();
    } catch (Bureaucrat::GradeTooLowException& e) {
        std::cout << e.what() << std::endl;
    } catch (Bureaucrat::GradeTooHighException& e) {
        std::cout << e.what() << std::endl;
    }
}