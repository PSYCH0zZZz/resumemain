#include <iostream>

const size_t n = 10;

void input(int (*a)[n], size_t n, int n2){
    for (int i = 0; i < n2; ++i)
    {
        for (int j = 0; j < n2; ++j)
        {
            std::cin >> a[i][j];
        }
    }
}

void output(int (*a)[n], size_t n, int n2){
    for (int i = 0; i < n2; ++i)
    {
        for (int j = 0; j < n2; ++j)
        {
            std::cout << a[i][j] << " ";
        }
        std::cout << '\n';
    }
}

void multiplication(int (*a)[n], int (*b)[n], int (*c)[n], size_t n, int n2){
    for (int i = 0; i < n2; ++i){
        for (int j = 0; j < n2; ++j){
            c[i][j] = 0;
            for (int k = 0; k < n2; ++k){
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
}

int main() {
    int n2;
    std::cin >> n2;
    int a[n][n];
    int b[n][n];
    int c[n][n];
    input(a, n, n2);
    input(b, n, n2);
    multiplication(a, b, c, n, n2);
    output(c, n, n2);

    return 0;
}
