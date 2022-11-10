#include "iter.hpp"

class A {
    public:
        int i;
        A(): i(13) {};
};

std::ostream& operator << (std::ostream& out, const A& a) {
    out << a.i;
    return out;
}

template <typename Type>
void print_str(const Type& str) {
    std::cout << str << std::endl;
}

int main()
{
    int arr1[4] = {1, 2, 3, 4};
    std::string arr2[3] = {"test", "test1", "test2"};
    A arr3[4];

    iter(arr1, 4, print_str);
    iter(arr2, 3, print_str);
    iter(arr3, 3, print_str);
}
