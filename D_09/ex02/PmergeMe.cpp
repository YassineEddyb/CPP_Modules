#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& obj) {
    *this = obj;
}

PmergeMe& PmergeMe::operator = (const PmergeMe& obj) {
    vec = obj.vec;
    dq = obj.dq;
    return *this;
}

template<typename T>
void PmergeMe::print_cntr(T &cntr) {
    size_t size;

    if (cntr.size() > 5) size = 5;
    else size = cntr.size();

    for(size_t i = 0; i < size; i++) {
        std::cout << cntr[i] << " ";
    }
    if (cntr.size() > 5) std::cout << "[...]";

    std::cout << std::endl;
}

template<typename T>
void PmergeMe::parse(T &cntr, int argc, char** argv) {
    for (int i = 1; i < argc ; i++) {
        try {
            std::istringstream iss(argv[i]);
            int number;
            iss >> number;
            if (iss.fail()) {
                std::cerr << "Error" << std::endl;
                std::exit(1);
            }
            cntr.push_back(number);
        } catch(std::exception &err) {
            std::cerr << "Error" << std::endl;
            std::exit(1);
        }
        if (cntr[i - 1] < 0) {
            std::cerr << "Error" << std::endl;
            std::exit(1);
        }
    }
}

template<typename T>
void PmergeMe::sort_pairs(T &cntr) {
    for(size_t i = 0; i < cntr.size() && i + 2 < cntr.size(); i += 2) {
        if (cntr[i] > cntr[i + 1]) {
            int temp = cntr[i];
            cntr[i] = cntr[i + 1];
            cntr[i + 1] = temp;
        }
    }
}

template<typename T>
void PmergeMe::incerstion_sort(T &cntr) {
    T temp;

    for(size_t i = 0; i < cntr.size(); i += 2) {
        temp.push_back(cntr[i]);
    }
    std::sort(temp.begin(), temp.end());

    for(size_t i = 1; i < cntr.size(); i += 2) {
        temp.insert(std::upper_bound(temp.begin(), temp.end(), cntr[i]), cntr[i]);
    }

    cntr = temp;
}

void PmergeMe::mergeInserstionSortVec(int argc, char **argv) {
    parse(vec, argc, argv);
    std::cout << "Before: ";
    print_cntr(vec);
    sort_pairs(vec);
    incerstion_sort(vec);
    std::cout << "After:  ";
    print_cntr(vec);
}

void PmergeMe::mergeInserstionSortDq(int argc, char **argv) {
    parse(dq, argc, argv);
    sort_pairs(dq);
    incerstion_sort(dq);
}

PmergeMe::~PmergeMe() {}