#include "easyfind.hpp"

int main () {
    int arr[] = {5, 10, 15, 20, 20, 23, 42, 45};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::vector<int> vect(arr, arr+n);

    try
    {
        std::cout << easyfind(vect, 20) << std::endl;
        std::cout << easyfind(vect, 250) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}