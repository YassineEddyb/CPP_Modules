#include "iter.hpp"

int main()
{
    std::string arr2[3] = {"test", "test1", "test2"};
    int arr1[5] = {1, 2, 3, 4};

    iter(arr1, 4, print_str);
    iter(arr2, 3, print_str);
}
