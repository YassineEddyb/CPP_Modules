#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <iostream>

class Contact {
    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string secret;
        std::string phone_number;

    public:
        void setData(std::string first_name, std::string last_name, std::string nick_name, std::string secret, std::string phone_number);
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickName() const;
        std::string getSecret() const;
        std::string getPhoneNumber() const;
        void displayContact() const;
};

#endif