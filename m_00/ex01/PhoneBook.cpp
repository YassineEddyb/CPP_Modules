#include "PhoneBook.hpp"

std::string truncate_string(std::string str)
{
    if (str.length() > 10)
    {
        str.resize(9);
        str.append(".");
    }

    return str;
}

int main () {
    PhoneBook pb;
    Contact c;
    std::string command;
    std::string frist_name, last_name, nick_name, secret, phone_number;
    std::string test[8] = {"1", "2", "3", "4", "5", "6", "7", "8"};

    for(int i = 0; i < 8; i++)
    {
        c.setData(test[i], test[i], test[i], test[i], test[i]);
        pb.setContact(c);
    }


    while(1337)
    {
        std::cout << "Enter Command: "; getline(std::cin, command);
        if (command == "")
            exit(0);
        if (command == "ADD")
        {
            std::cout << "Enter First Name: "; getline(std::cin, frist_name);
            std::cout << "Enter Last Name: "; getline(std::cin, last_name);
            std::cout << "Enter Nick Name: "; getline(std::cin, nick_name);
            std::cout << "Enter Darkest Secret: "; getline(std::cin, secret);
            std::cout << "Enter Phone Number: "; getline(std::cin, phone_number);

            if (frist_name == "" || last_name == "" || nick_name == "" || secret == "" || phone_number == "")
                std::cout << "Fields can not be empty" << std::endl;
            else
            {
                c.setData(frist_name, last_name, nick_name, secret, phone_number);
                pb.setContact(c);
            }
        }
        else if (command == "SEARCH")
            pb.displayPhonebook();
        else if (command == "EXIT")
            break;
        else
            std::cout << "Command not found" << std::endl;
    }
    return (0);
}