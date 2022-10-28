#include "Bureaucrat.hpp"
#include "Form.hpp"

int main () {
    try {
        Bureaucrat b("boo", 2);
        Form f1("a", true, 4, 100);
        Form f2("a", true, 1, 100);

        std::cout << b << std::endl;
        std::cout << f1 << std::endl;
        b.signForm(f1);
        b.signForm(f2);
    } catch (Form::GradeTooHighException& e) {
        std::cerr << e.what() << std::endl;
    } catch (Form::GradeTooLowException& e) {
        std::cerr << e.what() << std::endl;
    }
}