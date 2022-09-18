# ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include <istream>
# include <string>

class Contact {
    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string secret;
        std::string phone_number;

    public :
        void setData(std::string first_name, std::string last_name, std::string nick_name, std::string secret, std::string phone_number);
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickName() const;
        std::string getSecret() const;
        std::string getPhoneNumber() const;
};

class PhoneBook {
    private:
        Contact contacts[8];
        size_t size;
        size_t index;

    public :
        PhoneBook();
        void setContact(Contact c);
        Contact getContact(int index) const;
        void displayPhonebook() const;
};

std::string truncate_string(std::string str);

# endif