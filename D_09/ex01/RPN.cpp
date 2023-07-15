#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &obj) {
    *this = obj;
}

RPN& RPN::operator = (const RPN &obj) {
    rpn = obj.rpn;
    return *this;
}

void RPN::calcuate(std::string input) {
    int a, b;
    for(size_t i = 0; i < input.length(); i++) {
        if (input[i] == ' ')
        continue;

        char c = input[i];

        if (c == '+' || c == '-' || c == '*' || c == '/') {
            if (rpn.size() < 2) {
                std::cerr << "Error: invalid operation." << std::endl;
                return;
            }
        
            a = rpn.top(); rpn.pop();
            b = rpn.top(); rpn.pop();
        }

        switch (c) {
            case '+':
                rpn.push(a + b);
                break;  
            case '-':
                rpn.push(b - a);
                break;  
            case '*':
                rpn.push(a * b);
                break;  
            case '/':
                rpn.push(b / a);
                break; 
            default:
                if (c < 48 || c > 57) {
                std::cerr << "Error: invalid operation." << std::endl;
                return;
                }
                std::string str(1, input[i]);
                int num = std::atoi(str.c_str());
                rpn.push(num);
        }
    }

    std::cout << rpn.top() << std::endl;
}

RPN::~RPN() {}