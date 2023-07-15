#include "PmergeMe.hpp"

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    PmergeMe m;
    clock_t t1, t2;

    t1 = clock();
    m.mergeInserstionSortVec(argc, argv);
    t2 = clock();
    float diff1 = ((float)t2 - (float)t1) / 1000000;

    t1 = clock();
    m.mergeInserstionSortDq(argc, argv);
    t2 = clock();
    float diff2 = ((float)t2 - (float)t1) / 1000000;


    std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector: " 
                << std::fixed << diff1 << " us" << std::endl;

    std::cout << "Time to process a range of " << argc - 1 << " elements with std::deque: " 
                << std::fixed << diff2 << " us" << std::endl;
}