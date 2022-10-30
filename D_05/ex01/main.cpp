#include "Bureaucrat.hpp"
#include "Form.hpp"

int main () {
    Bureaucrat b("boo", 2);
    Form f1("form1", false, 4, 100);
    Form f2("form2", false, 1, 100);

    b.signForm(f1);
    b.signForm(f2);

    std::cout << f1 << std::endl;
    std::cout << f2 << std::endl;
}