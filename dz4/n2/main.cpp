#include <iostream>

const int n = 10;

void input(int (*a)[n], size_t n, int n2){
    for (int i = 0; i < n2 ; ++i){
        for (int j = 0; j < n2; ++j){
            std::cin >> a[i][j];
        }
    }
}

void output(int (*a)[n], size_t n, int n2){
    for (int i = 0; i < n2 ; ++i){
        for (int j = 0; j < n2; ++j){
            std::cout << a[i][j] << " ";
        }
        std::cout << '\n';
    }
}

void trancp(int (*a)[n], size_t n, int n2){
    for (int j = 0; j < n2; ++j){
        for (int i = 0; i < n2; ++i){
            std::cout << a[i][j] << " ";
        }
        std::cout << '\n';
    }
}

int main() {
    uint16_t n2;
    std::cin >> n2;
    int a[n][n];
    input (a, n, n2);
//    output (a, n); для проверки
    trancp(a, n, n2);
    return 0;
}
