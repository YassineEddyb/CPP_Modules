#include "RPN.hpp"

int main (int argc, char **argv) {
    RPN rpn;

    if (argc != 2) {
        std::cout << "Error: bad arguments" << std::endl;
        return 1;
    }

    rpn.calcuate(argv[1]);
    return 0;
}