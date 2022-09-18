#include "PhoneBook.hpp"

std::string get_input(std::string str)
{
    std::string input;
    std::cout << str;
    while(!std::cin.eof() && getline(std::cin, input))
    {
        if (input == "")
        {
            std::cout << "This field can not be empty" << std::endl;
            std::cout << str;
        }
        else return input;
    }
    exit(1);
}

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
    std::string index;

    while(1337)
    {
        std::cout << "Enter Command: "; getline(std::cin, command);
        if (command == "")
            exit(0);
        if (command == "ADD")
        {
            frist_name = get_input("Enter First Name: ");
            last_name = get_input("Enter Last Name: ");
            nick_name = get_input("Enter Nick Name: ");
            secret = get_input("Enter Darkest Secret: ");
            phone_number = get_input("Enter Phone Number: ");

            if (frist_name == "" || last_name == "" || nick_name == "" || secret == "" || phone_number == "")
                std::cout << "Fields can not be empty" << std::endl;
            else
            {
                c.setData(frist_name, last_name, nick_name, secret, phone_number);
                pb.setContact(c);
            }
        }
        else if (command == "SEARCH")
        {
            pb.displayPhonebook();
            while(42)
            {
                std::cout << "Enter Contact Index From More Details: "; getline(std::cin, index);
                try {
                    int idx = std::stoi(index);
                    if ((idx < 0 && idx > 7 ) || index.length() > 1)
                        std::cout << "Index is out of range" << std::endl;
                    else
                    {
                        pb.getContact(idx).displayContact();
                        break ;
                    }
                } catch (...)
                {
                    std::cout << "invalid Number"<< std::endl;
                }
            }
        }
        else if (command == "EXIT")
            break;
        else
            std::cout << "Command not found" << std::endl;
    }
    return (0);
}