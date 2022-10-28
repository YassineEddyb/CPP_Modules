#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
Form("ShrubberyCreationForm", false, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
Form("ShrubberyCreationForm", false, 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj):
Form("ShrubberyCreationForm", false, 145, 137) {
    (void)obj;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    std::ofstream ofs;
    if (this->getIsSigned() && executor.getGrade() <= getExectureGrade()) {
        ofs.open("./" + _target + "_shrubbery",  std::ofstream::out | std::ofstream::trunc);
        ofs << 
        "`                                  # #### #### \n\
                                ### /#|### |/#### \n\
                               ##/#/ ||/##/_/##/_# \n\
                             ###  /###|/ / # ### \n\
                           ##__#_## | #/###_/_#### \n\
                          ## #### #  #| /  #### ##/## \n\
                           __#_--###`  |{,###---###-~ \n\
                                      }{{ \n\
                                      }}{ \n\
                                      }}{ \n\
                                 ejm  {{} \n\
                                , -=-~{ .-^- _ \n\
                                      `} \n\
                                       { \n\
        ";
        if (!ofs)
            std::cerr << "Error: " << std::strerror(errno) << std::endl;
    } else 
        throw Form::FormNotSigned();
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm Destructor Called" << std::endl;
}