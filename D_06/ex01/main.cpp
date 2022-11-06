#include <cstdint> 
#include <iostream>

typedef struct Data {
    int a;
    char c;
} Data;

uintptr_t serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
    return reinterpret_cast<Data *>(raw);
}

int main() {
    Data data;
    data.a = 79;
    data.c = 'a';

    uintptr_t raw = serialize(&data);

    Data *ptr = deserialize(raw);

    std::cout << ptr->a << std::endl;
    std::cout << ptr->c << std::endl;
}