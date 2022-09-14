#include <iostream>


class MyArray {
public:
    int *ptr = new int;
    size_t size = 0;

public:

    MyArray(int * x) : ptr{x} {};

    MyArray(int * x, size_t t) : ptr{x}, size{t} {}

    MyArray(MyArray& x) {
        this->ptr = x.ptr;
        this->size = x.size;
        delete[] x.ptr;
        x.size = 0;
    }

    int& operator[]( int n);
    friend std::ostream& operator << (std::ostream &out, const MyArray &myArray);
};

int& MyArray::operator[]( int n){
    return ptr[n];
}

    MyArray operator=(MyArray x) { // y = x
        this->ptr = x.ptr;
        this->size = x.size;
    }

    MyArray operator+(MyArray x){
}
int bytes(char *ptr, size_t n){
    int k = 0;
    while(k < n){
        ++k;
    }
    return k;
};

void reverse(char *ptr, size_t n){
    for(int i = n; i >= 0; --i){
        std::cout << ptr[n];
    }
};

int findSubstring(MyArray& a, MyArray& b, size_t n, size_t m){
    int k = 0;
    for(int i = 0; i < n; ++i){
        if a[i] == b[0]{
            break;
        }
        ++k;
    }
    return k;
};



int main() {
    double z = 3.13;
    double * y = &z;
    MyArray arr(y);
    MyArray arr2(arr);
    std::cout << *(arr.ptr) << '\n';
    std::cout << *y << '\n';
    return 0;
}


