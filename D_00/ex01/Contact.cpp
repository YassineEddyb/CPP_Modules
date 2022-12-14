#include "Contact.hpp"

void Contact::setData(std::string first_name, std::string last_name, std::string nick_name, std::string secret, std::string phone_number) {
    this->first_name = first_name;
    this->last_name = last_name;
    this->nick_name = nick_name;
    this->secret = secret;
    this->phone_number = phone_number;
}

std::string Contact::getFirstName()const {
    return first_name;
}
std::string Contact::getLastName()const {
    return last_name;
}
std::string Contact::getNickName()const {
    return nick_name;
}
std::string Contact::getSecret()const {
    return secret;
}
std::string Contact::getPhoneNumber()const {
    return phone_number;
}

void Contact::displayContact()const
{
    std::cout << "First Name: " + first_name << std::endl;
    std::cout << "Last Name: " + last_name << std::endl;
    std::cout << "Nick Name: " + nick_name << std::endl;
    std::cout << "Phone Number: " + phone_number << std::endl;
    std::cout << "darkest Secret: " + secret << std::endl;
}

