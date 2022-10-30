#include "Bureaucrat.hpp"

int main () {
    // High grade constructor
    try {
        Bureaucrat c("Yassine", 151);
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    } 

    // Low grade constructor
    try {
        Bureaucrat c("Yassine", 0);
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    // Decrement grade
    try {
        Bureaucrat c("Yassine", 1);
        std::cout << c << std::endl;
        c.incrementGrade();
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    // Increment grade
    try {
        Bureaucrat c("Yassine", 150);
        std::cout << c << std::endl;
        c.decrememtGrade();
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}