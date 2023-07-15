#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string>
#include <iostream>
#include <cstdlib>


class RPN {
    private:
        std::stack<int> rpn;
    public:
        RPN();
        RPN(const RPN &obj);
        RPN& operator = (const RPN &obj);

        void calcuate(std::string input);

        ~RPN();
};



#endif