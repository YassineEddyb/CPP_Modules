#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    size = 0;
    index = 0;
}

void PhoneBook::setContact(Contact c) {
    contacts[index % 8] = c;
    if (size < 8)
        size++;
    
    if (index < 8)
        index++;
    else index = 1;
}

Contact PhoneBook::getContact(int index) const {
    return contacts[index];
}

void PhoneBook::displayPhonebook() const {
    size_t i = 0;

    while(i < size)
    {   
        std::cout<< std::setw(10) << i << "|";
        std::cout<< std::setw(10) << truncate_string(getContact(i).getFirstName()) << "|";
        std::cout<< std::setw(10) << truncate_string(getContact(i).getLastName()) << "|";
        std::cout<< std::setw(10) << truncate_string(getContact(i).getNickName()) << "|" << std::endl;
        i++;
    }
}
