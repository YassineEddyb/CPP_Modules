#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
Form("PresidentialPardonForm", false, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
Form("PresidentialPardonForm", false, 25, 5) {
    _target = target;
};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj):
Form("PresidentialPardonForm", false, 25, 5) {
    (void)obj;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (this->getIsSigned() && executor.getGrade() <= getExectureGrade()) {
        std::cout << _target + " has been pardoned by Zaphod Beeblebrox." << std::endl;
    } else
        throw Form::FormNotSigned();
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm Destructor Called" << std::endl;
}