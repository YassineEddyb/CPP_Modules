#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <cstdlib>
#include <algorithm>
#include <sstream>

class PmergeMe {
    private:
        std::vector<int> vec;
        std::deque<int> dq;

    public:
        PmergeMe();
        PmergeMe(const PmergeMe& obj);
        PmergeMe& operator = (const PmergeMe& obj);

        template<typename T> void parse(T &cntr, int argc, char** argv);
        template<typename T> void sort_pairs(T &cntr);
        template<typename T> void incerstion_sort(T &cntr);
        template<typename T> void print_cntr(T &cntr);

        void mergeInserstionSortVec(int argc, char **argv);
        void mergeInserstionSortDq(int argc, char **argv);

        ~PmergeMe();
};

#endif