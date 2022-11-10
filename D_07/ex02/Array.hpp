#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template <typename T> class Array {
    private:
        T *_arr;
        unsigned int _size;
    public:
        Array() {
            _arr = NULL;
            _size = 0;
        }

        Array(unsigned int n) {
            _size = n;
            _arr = new T[_size]();
        }

        Array(const Array& obj) {
            _arr = new T[obj._size];
            *this = obj;
        }

        Array& operator = (const Array& obj) {
            _size = obj._size;
            for(int i = 0; static_cast<unsigned int>(i) < _size; i++) {
                _arr[i] = obj._arr[i];
            }
            return *this;
        }

        unsigned int size() const {
            return _size;
        }

        T& operator[] (unsigned int index) {
            if (index >= _size || index < 0)
                throw std::exception();

            return _arr[index];
        };

        ~Array() {
            delete [] _arr;
        };
};


#endif