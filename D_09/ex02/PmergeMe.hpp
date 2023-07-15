#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>

class PmergeMe {
  private:
    std::vector<int> vec;
    std::deque<int> dq;

  public:
    PmergeMe();
    PmergeMe& PmergeMe(PmergeMe& obj);
    PmergeMe(char **argv);

    // vector
    void printVector();
    void mergeSrotVector(int left, int mid, int right);
    void insertionSortVector(int left, int right);
    void sortVector(int left, int right, int k);

    // deque
    void printDeque();
    void mergeSrotDeque(int left, int mid, int right);
    void insertionSortDeque(int left, int right);
    void sortDeque(int left, int right, int k);



    ~PmergeMe();
};

#endif