#include "Array.hpp"

class A {
    public:
        int i;
        A(): i(1337) {};
};

std::ostream& operator << (std::ostream& out, A& a) {
    out << a.i;
    return out;
}

int main()
{
    Array<int> arr(6);
    Array<int> arr2 = arr;
    Array<A> arr3(6);

    for(int i = 0; i < 6; i++)
        arr[i] = i;
    for(int i = 0; i < 6; i++)
        arr2[i] = i + 6;
    for(int i = 0; i < 6; i++)
        std::cout << arr[i] << std::endl;
    for(int i = 0; i < 6; i++)
        std::cout << arr2[i] << std::endl;
    for(int i = 0; i < 6; i++)
        std::cout << arr3[i] << std::endl;  


    try {
        arr[7] = 1;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}