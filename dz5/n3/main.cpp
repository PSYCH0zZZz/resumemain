#include <iostream>

#define MAX(x,y) {;((x)>(y))?(x):(y)}


int main() {
    int x = 2;
    int y = 3;
    std::cout << (MAX(++x, --y)) << '\n';
    std::cout << (MAX(x - 1, 5 - x)) << '\n';
    return 0;
}
