#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
Form("RobotomyRequestForm", false, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
Form("RobotomyRequestForm", false, 72, 45) {
    _target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj):
Form("RobotomyRequestForm", false, 72, 45) {
    (void)obj;    

}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    srand(time(0));
    if (this->getIsSigned() && executor.getGrade() <= getExectureGrade()) {
        int rand_num = rand() % 2;
        if (rand_num == 1)
            std::cout << _target +  " has been robotomized successfully" << std::endl;
        else
            std::cout << "robotomy failed" << std::endl;
    } else 
        throw Form::FormNotSigned();
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm Destructor Called" << std::endl;
}