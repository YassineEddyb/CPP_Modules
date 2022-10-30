#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main () {
    Intern i;

    Form *f1 = i.makeForm("presidential pardon", "test1");
    Form *f2 = i.makeForm("robotomy request", "test2");
    Form *f3 = i.makeForm("shrubbery creation", "test3");
    Form *f4 = i.makeForm("test", "test4");

    Bureaucrat b("Yassine", 1);

    f1->beSigned(b);
    f2->beSigned(b);
    f3->beSigned(b);
    (void)f4;

    b.executeForm(*f1);
    b.executeForm(*f2);
    b.executeForm(*f3);

    return 0;
}