#include "Harl.hpp" 

int main (int argc, char **argv) {
    Harl h;

    if (argc == 2)
        h.complain(argv[1]);
    else
        h.complain("makynch");
}