# ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class PhoneBook {
    private:
        Contact contacts[8];
        size_t size;
        size_t index;

    public:
        PhoneBook();
        void setContact(Contact c);
        Contact getContact(int index) const;
        void displayPhonebook() const;
};

std::string truncate_string(std::string str);

# endif