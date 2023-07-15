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

    void calcuate(std::string input);

    ~RPN();
};



#endif