#include "Intern.hpp"

Intern::Intern() {}

Form* Intern::makeForm(std::string name, std::string target) const {
    std::string arr[3] = {"shrubbery creation" , "robotomy request", "presidential pardon"};
    Form *f = NULL;
    int index = 3;
    for(int i = 0; i < 3; i++) {
        if (name == arr[i])
        {
            index = i;
            break;
        }
    } 

    switch (index) {
        case 0:
            f = new ShrubberyCreationForm(target);
            break;
        case 1:
            f = new RobotomyRequestForm(target);
            break;
        case 2:
            f = new PresidentialPardonForm(target);
            break;
        default:
            std::cerr << "This form not found" << std::endl;
    }
    return f;
}

Intern::~Intern() {
    std::cout << "Intern Destructor Called" << std::endl;
}
