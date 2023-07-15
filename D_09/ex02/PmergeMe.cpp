#include "PmergeMe.hpp"


PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(char **argv) {
	int	i, j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (isdigit(argv[i][j]) == 0) {
				std::cerr << "Error" << std::endl;
                std::exit(1);
            }
			j++;
		}
		vec.push_back(std::atoi(argv[i]));
		dq.push_back(std::atoi(argv[i]));
		i++;
	}
}

void PmergeMe::mergeSrotVector(int left, int mid, int right) {
    int i, j, k;
    std::vector<int> temp;

    i = left;
    j = mid + 1;

    while (i <= mid && j <= right) {
        if (vec[i] <= vec[j]) {
            temp.push_back(vec[i]);
            i++;
        }
        else {
            temp.push_back(vec[j]);
            j++;
        }
    }

    while (i <= mid) {
        temp.push_back(vec[i]);
        i++;
    }

    while (j <= right) {
        temp.push_back(vec[j]);
        j++;
    }

    k = 0;
    for (int index = left; index <= right; index++) {
        vec[index] = temp[k];
        k++;
    }
}

void PmergeMe::insertionSortVector(int left, int right) {
    for (int i = left + 1; i <= right; i++) {
        int key = vec[i];
        int j = i - 1;

        while (j >= left && vec[j] > key) {
            vec[j + 1] = vec[j];
            j--;
        }

        vec[j + 1] = key;
    }
}

// 2 3 1 4    // 2

void PmergeMe::sortVector(int left, int right, int k) {
    if (left < right) {
        if (right - left <= k) {
            insertionSortVector(left, right);
        }
        else {
            int mid = (left + right) / 2;

            sortVector(left, mid, k);
            sortVector(mid + 1, right, k);

            mergeSrotVector(left, mid, right);
        }
    }
}

void PmergeMe::printVector() {
  for (size_t i = 0; i < vec.size(); i++) {
    std::cout << vec[i] << " ";
  }
  std::cout << std::endl;
}

void PmergeMe::mergeSrotDeque(int left, int mid, int right) {
    int i, j, k;
    std::deque<int> temp;

    i = left;
    j = mid + 1;

    while (i <= mid && j <= right) {
        if (dq[i] <= dq[j]) {
            temp.push_back(dq[i]);
            i++;
        }
        else {
            temp.push_back(dq[j]);
            j++;
        }
    }

    while (i <= mid) {
        temp.push_back(dq[i]);
        i++;
    }

    while (j <= right) {
        temp.push_back(dq[j]);
        j++;
    }

    k = left;
    while (!temp.empty()) {
        dq[k] = temp.front();
        temp.pop_front();
        k++;
    }
}

void PmergeMe::insertionSortDeque(int left, int right) {
    for (int i = left + 1; i <= right; i++) {
        int key = dq[i];
        int j = i - 1;

        while (j >= left && dq[j] > key) {
            dq[j + 1] = dq[j];
            j--;
        }

        dq[j + 1] = key;
    }
}

void PmergeMe::sortDeque(int left, int right, int k) {
    if (left < right) {
        if (right - left <= k) {
            insertionSortDeque(left, right);
        }
        else {
            int mid = (left + right) / 2;

            sortDeque(left, mid, k);
            sortDeque(mid + 1, right, k);

            mergeSrotDeque(left, mid, right);
        }
    }
}

void PmergeMe::printDeque() {
  for (size_t i = 0; i < dq.size(); i++) {
    std::cout << dq[i] << " ";
  }
  std::cout << std::endl;
}

PmergeMe::~PmergeMe() {}
