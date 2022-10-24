#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

#define SIZE 100

class Brain {
    private:
        std::string _ideas[SIZE];
    public:
        Brain();
        Brain(const Brain& obj);
        Brain& operator = (const Brain& obj);

        void setIdeas(std::string* ideas);
        std::string* getIdeas();

        ~Brain();
};

#endif